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
	}
	else{
  nw->next=top;
}
  return nw;

}

struct node *pop(struct node *top)
{
struct node *temp;
temp=top->next;	
  top->next=NULL;
  return (temp);
}

struct node *display(struct node *top)
{
	struct node *temp;
	temp=top;
	while(top->next!=NULL)
	{
		printf("%d \n",top->value);
		top=top->next;
	}
	printf("%d\n*",top->value);
  return (temp);
}

int main()
{
	 char s[990];gets(s);
	 int i=0;
	 struct node* top ;
	 top=NULL; 	
	 
	 while(s[i]!='$')
	 {if(i==0)
	 	{
        if((int)s[i] >=(int)'0' &&(int)s[i] <=(int)'9')
        {
        		 struct node* topi = (struct node*) malloc(sizeof(struct node)); 	
        	topi->value=(int)s[i] - (int)'0';
        	topi->next=NULL;
        	top=push(top,topi);

        	printf("Stack after operation :  \n");
        	top=display(top);
        }
         }
         else
         {
             if((int)s[i] >=(int)'0' &&(int)s[i] <=(int)'9')
        {	 struct node* topy = (struct node*) malloc(sizeof(struct node)); 	

        	topy->value=(int)s[i] - (int)'0';
        	topy->next=NULL;
        	top=push(top,topy);
            
        	printf("Stack after operation :  \n");
        	top=display(top);
        }
        else if(s[i]!=',')
        {
          if(s[i]=='+')
          {
          	int valu=top->value;
          	top=pop(top);
          	valu+=top->value;
          	top=pop(top);
            struct node* topy = (struct node*) malloc(sizeof(struct node)); 	  
        	topy->value=valu;
        	topy->next=NULL;
        	top=push(top,topy);
          	
          }

          else if(s[i]=='-')
          {
          	int valu=top->value;
          	top=pop(top);
          	valu=(top->value)-valu ;
          	top=pop(top);
            struct node* topy = (struct node*) malloc(sizeof(struct node)); 	  
        	topy->value=valu;
        	topy->next=NULL;
        	top=push(top,topy);
          	
          }



          else if(s[i]=='*')
          {
          	int valu=top->value;
          	top=pop(top);
          	valu=top->value *valu;
          	top=pop(top);
            struct node* topy = (struct node*) malloc(sizeof(struct node)); 	  
        	topy->value=valu;
        	topy->next=NULL;
        	top=push(top,topy);
          	
          }
          else if(s[i]=='/')
          {
          	int valu=top->value;
          	top=pop(top);
          	valu=top->value /valu;
          	top=pop(top);
            struct node* topy = (struct node*) malloc(sizeof(struct node)); 	  
        	topy->value=valu;
        	topy->next=NULL;
        	top=push(top,topy);
          	
          }
          else if(s[i]=='^')
          {
          	int valu=top->value;
          	top=pop(top);
          	valu=pow(top->value ,valu);
          	top=pop(top);
            struct node* topy = (struct node*) malloc(sizeof(struct node)); 	  
        	topy->value=valu;
        	topy->next=NULL;
        	top=push(top,topy);
          	
          }


        	printf("Stack after operation :  \n");
        	top=display(top); 
        }  
         }
	 	i++;
	 }
	 //top=display(top);
	 return 0;   	
}