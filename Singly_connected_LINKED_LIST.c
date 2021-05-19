#include<stdio.h>
#include<stdlib.h>
struct node
{
	int value;
	struct node *next;
};

struct node *display ( struct node *start)
{
	struct node *temp;
	temp=start;
  if(start==NULL)
  	printf("Empty List \n");
  else
  	{
  		while(start!=NULL)
    	{
  		 printf("%d ",(start->value));
  		 start = start->next;
  	    }
  	    printf("\n");
  	}

  	return (temp);
}


struct node *insert (struct node *head,struct node *n ,int pos)
{
struct node *temp;
temp = head;	
if(pos!=1)
{
  while(pos-1 != 1 )
  {
  	if(head==NULL)
  	{
  		printf("Correct value of position is not entered\n");
  		break;
  	}
  	head= head->next;
  	pos--;
  }
  n->next = head->next;
  head->next = n;
//display(temp);
  head=temp;
}
else
{
	n->next=head;
	temp=n;
	head=n;
	//display(n);
}
display(temp);

return head;
}



struct node * delet (struct node *head,int pos)
{
struct node *temp;

if(pos!=1)
{
	temp = head;	
  while(pos-1 != 1 )
  {
  	if(head==NULL)
  	{
  		printf("Correct value of position is not entered\n");
  		break;
  	}
  	head= head->next;
  	pos--;
  }
  struct node *n;
  n = head->next ;
  head->next = n->next;
  display(temp);
}
else
{
   head =head->next;
   display(head);
   temp=head;
}

return temp;
}



int main()
{

    printf("*------------SINGLY CONNECTED LINKED LIST---------------*\n");
    printf("                       MENU                              \n");
    printf("1. INSERT 1st NODE\n");
    printf("2. INSERT \n");
    printf("3. DISPLAY \n");
    printf("4. DELETE \n");
    printf("5. EXIT \n");
    
    int c;
   // scanf("%d",&c);
   struct node *first=NULL;
	           first = (struct node*)malloc(sizeof(struct node));
               first ->value =0;
	           first ->next=NULL;
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
	           //first ->next=NULL;   
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
	           first1 ->next=NULL;
	           int pos;
               printf("Enter valid Insertion Position ");
               scanf("%d",&pos);

               first=insert(first,first1,pos);
    	   }

    	   break;

    	case 3:
    	  first=display(first);
    	  break;
    	case 4:
    	     int pos;
             printf("Enter valid Deletion Position ");
             scanf("%d",&pos);
    	     first=delet(first,pos);
    	     break;
    	case 5:
    	  break;
    }

    if(c!=5)
    	goto label;

	return 0;
}