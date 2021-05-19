#include<stdio.h>
#include<stdlib.h>

struct node 
{
	int value;
	struct node *next;
};
//struct node * front=NULL;
//struct node * rear=NULL;

struct node * display(struct node * front)
{
	struct node * temp;
	temp=front;
	if(temp==NULL)
		printf("Empty\n");
	while(temp!=NULL)
	{
		printf("%d ",temp->value);
		temp=temp->next;
	}
return front;
}

struct node * enqueue(struct node * front,struct node * rear,struct node * nwe)
{
//	struct node * temp;
	
 
	if(rear==NULL  )
	{printf("NULL\n");
		front=nwe;
		rear=front;
		// printf("\n 1enq%d\n",front->value);
	}
	else
	{
		rear->next=nwe;
		rear=rear->next;
		 //printf("\n 1enq%d\n",front->value);
		
	}
 // printf("\n enq%d\n",front->value);
//front=display(front);
return front;
}


struct node * dequeue(struct node * front,struct node * rear)
{
	struct node * temp;
	if(front==NULL && rear==NULL)
	{printf("Empty Queue\n");
	}
	else if(front==rear)
	{
       front=NULL;
       rear=NULL;
	}
	else
	{
		temp=front->next;
		front=temp;
	}
	front=display(front);
	return (front);
}

int main()
{
   int n, ch;
   struct node *front ,*rear;
                 //   struct node *front =(struct node*) malloc(sizeof(struct node));
                 //struct node *rear =(struct node*) malloc(sizeof(struct node));

   front=NULL;
   rear=NULL;

  do
    {
        printf("\n\nQueue Menu\n1. Add \n2. Remove\n3. Display\n0. Exit");
        printf("\nEnter Choice 0-3? : ");
        scanf("%d", &ch);
        struct node *nptr =(struct node*) malloc(sizeof(struct node));
        switch (ch)
        {
            case 1:
                {printf("\nNumber of elements to be entered :");
                int j;scanf("%d",&j);
                for(int u=0;u<j;u++)
                {
                 printf("\nEnter a value to enqueue");
                 scanf("%d", &n);
                 
                 nptr->value = n;
                 nptr->next = NULL;
                 front=enqueue(front,rear,nptr);
                
                }
                break;}
            case 2:
                front = dequeue(front,rear);
                break;
            case 3:
                front= display(front);
                break;
        }
    }while (ch != 0);


	return 0;
}