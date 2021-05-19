#include<stdio.h>
#include<stdlib.h>

struct data
{
  int val;
  int priority;
};

struct Queue
{
	int front,rear;
    struct data array[100];
}q;


struct Queue * QUEsort(struct Queue *pq)
{
    for(int i=pq->front;i<=pq->rear;i++)
    {
    	for(int j=i+1;j<=pq->rear;j++)
    	{
    		if(pq->array[i] . priority < pq->array[j] . priority )
    		{
                  struct data temp=pq->array[i] ;
                  pq->array[i] =pq->array[j] ;
                  pq->array[j]  =temp;

    		}
    	}
    }
    return pq;
}


int isempty(struct Queue *pq)
{
if(pq->rear==pq->front )
{
	return 1;
}
else
return 0;
}

void remove(struct Queue *pq)
{
  if(isempty(pq))
  {
    printf("Empty\n");
  }
  else
  {
  	//struct data o=pq->array[pq->front];
    pq->front++;
    pq->front=(pq->front)% 99;
    
  }


}

void insert(struct Queue *pq,struct data x)
{
if(pq->rear==99)
{
  printf("FULL\n");
 exit(1);
}
else
{
	if(pq->front==-1)
	{
		pq->front++;
	}
	pq->rear++;
	pq->array[pq->rear ]=x;
}
}

void display(struct Queue *pq)
{
	pq=QUEsort(pq);
	if(isempty(pq))
		{printf("Empty\n");
		
	}
	else
	{
		int k;k=pq->rear;
		int i=pq->front;
		printf("Current Queue is :\n(value\tpriority)\n");
		while(i<=k)
		{
			struct data *d;
			d=pq->array;
			
			printf("%d\t%d \n",d[i].val,d[i].priority);
			i++;
		}
	}
}

int main()
{
	//struct Queue * q;
    int ch; q.rear=-1;
    do
    {
        printf("\n\nQueue Menu\n1. Add \n2. Remove\n3. Display\n0. Exit");
        printf("\nEnter Choice 0-3? : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                int n;
                printf("\nEnter number of elements to insert ");
                scanf("%d", &n);
                for (int i = 0; i < n; ++i)
                {
                	struct data c; printf("Enter accordingly \n(value priority)\n");
                	scanf("%d%d",&c.val,&c.priority);
                	insert(&q,c);
                }
                display(&q);
                break;
            case 2:
                //int ki;
                remove(&q);
                //printf("%d removed from queue",ki);
                display(&q);
                break;
            case 3:
                display(&q);
                break;
        }
    }while (ch != 0);
	/*struct data x;
	x.val=9;
	x.priority=0;
    insert(&q,x);
    display(&q);*/
	return 0;
}