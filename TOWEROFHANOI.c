#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

struct node 
{
  int value;
  struct node *next;
};

struct node *push(struct node *top,struct node *nw)
{

  if(top==NULL)
  {
   // struct node* top = (struct node*) malloc(sizeof(struct node));  
      top=nw;
      nw->next=NULL;
  }
  else{
  nw->next=top;
}
  return nw;

}

struct node *pop(struct node *top)
{
  if(top!=NULL){
struct node *temp;
temp=top->next; 
  top->next=NULL;
  return (temp);}
  else return   NULL;
}

struct node *display(struct node *top)
{
  if(top!=NULL)
  {
  struct node *temp;
  temp=top;
  while(top->next!=NULL)
  {
    printf("%d \n",top->value);
    top=top->next;
  }
  printf("%d\n",top->value);
  return (temp);
}
else{
printf("*\n");

return top;}
}



void status(struct node* topA,struct node* topB,struct node* topC)
{if(topA!=NULL){
  printf("ROD 1:\n");
   topA=display(topA);
}
else
{
  printf("ROD 1:\n*\n");
   
}
if(topB!=NULL){
printf("ROD 2:\n");
   topB=display(topB);
  }else
{
  printf("ROD 2:\n*\n");
   
}
  if(topC!=NULL){printf("ROD 3:\n"); 
   topC=display(topC);}
else
{
  printf("ROD 3:\n*\n");
   
}
}


void TOH(struct node* start,int s,struct node* end,int e,int k,struct node* aux,int a)
{ //status(start,aux,end);
//printf("%d\n",k);
if(k==1)
{
  printf("Move disk %d from rod %d to %d\n",1,s,e);
  for(int i=k;i>0;i--){
  //struct node *temp;
           struct node* temp = (struct node*) malloc(sizeof(struct node));  
  temp->value=i;
  temp->next=NULL;
  end=push(end,temp);
  //printf("e%d\n",end->value);
  //printf("%d\n",start->value);
  start=pop(start);}
  
}
else
{
   TOH(start,s,aux,a,k-1,end,e);
  printf("Move disk %d from rod %d to %d\n",k,s,e);
   TOH(aux,a,end,e,k-1,start,s);
    
}
}

int main()
{
  
          struct node* topA = (struct node*) malloc(sizeof(struct node));  
          struct node* topB = (struct node*) malloc(sizeof(struct node));  
          struct node* topC = (struct node*) malloc(sizeof(struct node));  
          int n;scanf("%d",&n);
          topA=NULL;
          topB=NULL;
          topC=NULL;
          for(int i=n;i>0;i--)
          {
             struct node* newd = (struct node*) malloc(sizeof(struct node));  
             newd->next=NULL;
             newd->value=i;
             topA=push(topA,newd);
          }
        status(topA,topB,topC);
        TOH(topA,1,topC,3,n,topB,2);
         for(int i=n;i>0;i--)
          {
             struct node* newd = (struct node*) malloc(sizeof(struct node));  
             newd->next=NULL;
             newd->value=i;
             topC=push(topC,newd);
             topA=pop(topA);
          }
        status(topA,topB,topC);
    
}