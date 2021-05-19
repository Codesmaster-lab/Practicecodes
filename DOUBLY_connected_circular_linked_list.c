#include<stdio.h>
#include<stdlib.h>

struct node
{
  struct node *prev;
	int value;
	struct node *next;
};

struct node *display(struct node *first)
{
   struct node *temp;
   temp=first;
   while(temp->next != first)
   {
   	printf("%d ",temp->value);
   	temp=temp->next;
   }
   printf("%d \n",temp->value);
   return first;
}

struct node *append_endorbeg(struct node *first,struct node *New)
{
   struct node *temp;
   temp = first;
   
   while(temp->next != first)
   {
   //printf("\n%d\n",temp->value);
   temp=temp->next;
   }
   	temp->next=New;
   	New->next=first;

    first->prev=New;
    New->prev=temp;

   return first;

}


struct node *insert_atpos(struct node *first,struct node *New,int pos)
{
   
   
   if(first==NULL)
   {
   	 printf("Empty Circular linked list\n");
   }

   else if(pos!=1)
   {
       struct node *temp;
       temp = first;
       while(pos-1 > 1 )
       {
       	temp=temp->next;
       	if(temp==first)  // Here if first is changed to NULL then the pos will be pos%(present size of list)
       	{
       		printf("Wrong position entered\n");
       		goto l;
       	}
       	pos--;
       } 
       struct node *tempo ;
       tempo=temp->next;
       temp->next=New;
       New ->next=tempo;

       tempo->prev=New;
       New->prev=temp;
   }
   else
   {
   	printf("Enter a Valid Choice to append at begining or end");
   }
   l:
 return first;

}

struct node *delet(struct node *first,int pos)
{

    int n=0;
    struct node *last,*temp;
   	temp=first;
   	while(temp->next!=first)
   	{
   		temp=temp->next;
   		n++;
   	}
   	n+=1;
   //printf("%d\n",n);
      
   if(first==NULL)
   {
   	 printf("Empty Circular linked list\n");
   }
   
   else if(pos>n)
   {
    printf("Wrong position entered\n");

   }
    
   else if(pos!=1)
   {int c=1;
       struct node *temp;
       temp = first;
       while(pos-1 > 1 )
       {
       	temp=temp->next;
       	if(temp==first)  // Here if first is changed to NULL then the pos will be pos%(present size of list)
       	{

       		printf("Wrong position entered\n");
       		break;
       		c=0;
       	}
       	pos--;
       } 
       if (c){
       struct node *tempo ;
       tempo=temp->next;
       temp->next=tempo->next;
       tempo=tempo->next;
       tempo->prev=temp;
       }
       
   }
   else
   {
   	struct node *last,*temp;
   	temp=first;
   	while(temp->next!=first)
   	{
   		temp=temp->next;
   	}
   	last=temp;
   	first=first->next;
   	last->next=first;
   }
   
 return first;

}

int main()
{

 printf("*------------DOUBLY CONNECTED CIRCULAR LINKED LIST---------------*\n");
    printf("                       MENU                              \n");
    printf("1. CREATE 1st NODE\n");
    printf("2. APPEND at Begining or End \n");
    printf("3. DISPLAY \n");
    printf("4. DELETE \n");
    printf("5. EXIT \n");
    printf("6. INSERT in BETWEEN \n");
    
    int c;
   // scanf("%d",&c);
   struct node *first=NULL;
	           first = (struct node*)malloc(sizeof(struct node));
               first ->value =0;
	           first ->next=first;
             first->prev=first;
  label :
    printf ("CHOOSE A VALID OPTION ");
    scanf("%d",&c);
   int b,pos;
	          
    switch(c) 
    {
    	case 1:
    	    //int b;
    	   	printf("value of node ");
    	   	scanf("%d",&b); 
               first ->value =b;
               first->next=first;
	           first ->prev=first; 
	         first=display(first);  
	        break;   

    	case 2:  
    	   	  // int b;
    	   	   printf("value of node ");
    	   	   scanf("%d",&b); 
               struct node *first1;
	           first1 = (struct node*)malloc(sizeof(struct node));
               first1 ->value =b;
	           first1 ->next=NULL;
	          // int pos;
               first=append_endorbeg(first,first1);
    	       first=display(first);break;

    	case 3:
    	       first=display(first);
    	        break;
    	case 4:
    	     //int pos;
             printf("Enter valid Deletion Position ");
             scanf("%d",&pos);
    	     first=delet(first,pos);
    	     first=display(first);
    	     break;
    	case 5:
    	   break;
    	case 6:
    	     int n;
             printf("Number of nodes to be inserted : ");
    	    scanf("%d",&n);
    	   for (int i = 0; i < n; ++i)
    	   {  
    	   	 
               //int b;
    	   	   printf("value of node ");
    	   	   scanf("%d",&b); 
               struct node *first1=NULL;
	           first1 = (struct node*)malloc(sizeof(struct node));
               first1 ->value =b;
	           first1 ->next=NULL;
	          // int pos;
               printf("Enter valid Insertion Position ");
               scanf("%d",&pos);
               first=insert_atpos(first,first1,pos);
     	    first=display(first);
     	    }
     	       break;     	    
  }

    if(c!=5)
    	goto label;
 
	return 0;
}