#include<stdio.h>
#include<stdlib.h>

struct node
{
	int value;
	struct node *next;
} *top=NULL;

int st_count(struct node *top)
{
     int c=0;
	struct node *temp;
	temp=top;
	while(temp->next!=NULL)
	{
		c++;
	}
	return c;
}

void 

int main()
{
	/* code */
	return 0;
}