#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


struct queue
{
int arr[100];
int rear;
int front;
};

struct node
{
	int value;
	bool visited;
	struct node * N[100];
	int nexsize;
};

struct node *newnode(int val)
{
	struct node* nodee= (struct node*)malloc(sizeof(struct node));
	nodee->value=val;
	nodee->visited=false;
	nodee->nexsize=0;
};

void createeadge(struct node * n1 ,struct node * n2 )
{
	n1->N[n1->nexsize]=n2;
	n1->nexsize++;
	n2->N[n2->nexsize]=n1;
	n2->nexsize++;
}

bool isempty(struct queue *q)
{
	if((q->front- q->rear)<0)
		return true;
	else
		return false;
} 

void enqueue(struct queue *q,int a)
{
	if(q->rear!=99)
     {q->arr[q->rear]=a;
     	q->rear++;}
    else
     return;
}


int dequeue(struct queue *q)
{

	if(!isempty(q))
    {
    	int k=q->front;
    	q->front++;
    	return (q->arr[k]);
    }
    else
     exit(1) ;
}

struct node * findnode(int a,struct node * s)
{
	if(s->value==a)
		return s;
	else
	{
		for (int i = 0; i < s->nexsize; ++i)
		{
			return findnode(a,s->N[i]);
		}
		return NULL;
	}
}

void BFS(struct queue * q,struct node * start)
{
	enqueue(q,start->value);
	start->visited=true;
	while(!isempty(q))
	{
		//print queue
		for (int i = q->front; i <= q->rear; ++i)
		{
			printf("%d ",q->arr[i]);
		}

		int l=dequeue(q);
	    
	    start=findnode(l,start);

      for (int i = 0; i < start->nexsize; ++i)
		{
			if((start->N[i])->visited == false)
			{
				enqueue(q,start->N[i]->value);
				(start->N[i])->visited=true;
			}
			
		}

	}

}

int main()
{
    struct queue *qw=(struct queue*)malloc(sizeof(struct queue));
    qw->front=0;
    qw->rear=0;
    
	struct node *nd,*nd1,*nd2,*nd3;
	nd=newnode(2);
	nd1=newnode(1);
	nd2=newnode(0);
	nd3=newnode(3);

	
	createeadge(nd,nd1);
	createeadge(nd,nd3);
	createeadge(nd,nd2);
	createeadge(nd1,nd2);

   printf("%d ",findnode(nd3->value,nd) ->nexsize);

	BFS(qw,nd);

	

	return 0;
}