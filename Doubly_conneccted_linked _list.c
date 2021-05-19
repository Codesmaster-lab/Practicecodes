#include<stdio.h>
#include<stdlib.h>

struct node 
{
	struct node *rear;
	int value;
	struct node *front;
};

struct node *display_from_beg(struct node *first)
{
	struct node *temp;
	temp=first;
	while(temp->front!=NULL)
	{
		printf("%d ",temp->value);
		temp=temp->front;
	}
	printf("%d \n",temp->value);
	return first;
}


struct node *display_from_end(struct node *first)
{
	struct node *temp;
    temp=first;
    while(temp->front!=NULL)
	{
		//printf("%d ",temp->value);
		temp=temp->front;
	}
	while(temp->rear!=NULL)
	{
		printf("%d ",temp->value);
		temp=temp->rear;
	}
	printf("%d \n",temp->value);
	return temp;
}

struct node *insert_from_beg(struct node *head, struct node *New ,int pos)
{
	struct node *temp;
temp = head;	
if(pos>1)
{
  while(pos-1 != 1 )
  {
  	if(temp==NULL)
  	{
  		printf("Correct value of position is not entered\n");
  		break;
  	}
  	temp= temp->front;
  	pos--;
  }

  New->front=temp->front;
  temp->front=New;
  New->rear=temp;
  //n->rear=New;

}

else
{
	//printf("Heloo");
	head->rear=New;
	New->front=head;
	New->rear=NULL;
	head=New;
	//display_from_beg(New);
}
display_from_beg(head);
return head;   
}   



struct node * delet (struct node *head,int pos)
{
struct node *temp;

if (head==NULL)
	printf("EMPTY LIST\n");
if(pos!=1)
{
	temp = head;	
  while(pos-1 != 1 )
  {
  	if(temp==NULL)
  	{
  		printf("Correct value of position is not entered\n");
  		break;
  	}
  	temp= temp->front;
  	pos--;
  }
  struct node *n;
  n = temp->front ;
  temp->front = n->front;
  n->rear=temp;
  display_from_beg(head);
}
else
{
   head =head->front;
   head->rear= NULL;
   display_from_beg(head);
 
}

return head;
}


int main()
{

	 printf("*------------DOUBLY CONNECTED LINKED LIST---------------*\n");
    printf("                       MENU                              \n");
    printf("1. CREATE 1st NODE\n");
    printf("2. INSERT AT ANY POSITION\n");
    printf("3. DISPLAY FROM BEGIN \n");
    printf("4. DISPLAY FROM END \n");
    printf("5. DELETE ANY NODE\n");
    printf("6. EXIT \n");
    
    int c;
   // scanf("%d",&c);
   struct node *first=NULL;
	           first = (struct node*)malloc(sizeof(struct node));
               //first ->value =0;
	           first->rear=NULL;
	           first->front=NULL;
  label :
    printf ("CHOOSE A VALID OPTION ");
    scanf("%d",&c);
   
	          
    switch(c) 
    {
    	case 1:
    	    int b;
    	   	printf("value of node ");
    	   	scanf("%d",&b); 
               first ->value =b;   
	        break;   

    	case 2:
    	   int n;
    	   printf("Number of nodes to be inserted : ");
    	   scanf("%d",&n);
    	   for (int i = 0; i < n; ++i)
    	   {  
    	   	    int b;
    	   	   printf("value of node ");
    	   	   scanf("%d",&b); 
               struct node *first1=NULL;
	           first1 = (struct node*)malloc(sizeof(struct node));
               first1 ->value =b;
	           first1 ->front=NULL;
	           first1->rear=NULL;
	           int pos;
               printf("Enter valid Insertion Position ");
               scanf("%d",&pos);

               first=insert_from_beg(first,first1,pos);
    	   }

    	   break;

    	case 3:
    	  first=display_from_beg(first);
    	  break;
    	case 4:
    	  first=display_from_end(first);
    	  break;
    	
    	case 5:
    	     int pos;
             printf("Enter valid Deletion Position ");
             scanf("%d",&pos);
    	     first=delet(first,pos);
    	     break;
    	case 6:
    	  break;
    }

    if(c!=6)
    	goto label;  

	return 0;
}