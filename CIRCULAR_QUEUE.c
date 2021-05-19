#include<stdlib.h>
#include<stdio.h>

struct Queue{
int value;
int front,rear,array[6];
}q;

int isempty(struct Queue *pq)
{
if(pq->rear==pq->front)
{
	return 1;
}
else
return 0;
}

int remove(struct Queue *pq)
{
  if(isempty(pq))
  {
    printf("Empty\n");
    exit(1);
  }
  else
  {
  	int o=pq->array[pq->front];
    pq->front++;
    pq->front=(pq->front)%5;
    return(o);
  }

  
}

void insert(struct Queue *pq,int x)
{
if(pq->rear==5 && pq->front==0)
{
  printf("FULL\n");
 exit(1);
}
else if(pq->front >0 && pq->front<5)
{
    pq->front=0;
    
}
else
{
	pq->rear++;
	pq->array[pq->rear % 6 ]=x;
}
}

void display(struct Queue *pq)
{
	if(isempty(pq))
		{printf("Empty\n");
		exit(1);
	}
	else
	{
		int k;k=pq->rear;
		int i=pq->front;
		while(i<=k)
		{
			printf("%d  ",pq->array[i]);
			i++;
		}
	}
}
int main()
{
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
                	int c; printf("Enter ");
                	scanf("%d",&c);
                	insert(&q,c);
                }
                display(&q);
                break;
            case 2:
                int ki;
                ki=remove(&q);
                printf("%d removed from queue",ki);
                break;
            case 3:
                display(&q);
                break;
        }
    }while (ch != 0);
 return 0;
}