// C program for array implementation of stack
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
 
struct Stack {
    int top;
    unsigned capacity;
    int* array;
};
 
struct Stack* createStack(unsigned capacity)
{
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*)malloc(stack->capacity * sizeof(int));
    return stack;
}
 
int isFull(struct Stack* stack)
{
    return stack->top == stack->capacity - 1;
}
 
int isEmpty(struct Stack* stack)
{
    return stack->top == -1;
}
 
void push(struct Stack* stack, int item)
{
    if (isFull(stack))
        return;
    stack->array[++stack->top] = item;
    printf("%d pushed to stack\n", item);
}
 
int pop(struct Stack* stack)
{
    if (isEmpty(stack))
        return INT_MIN;
    return stack->array[stack->top--];
}
 
int peek(struct Stack* stack)
{
    if (isEmpty(stack))
        return INT_MIN;
    return stack->array[stack->top];
}

// Driver program to test above functions
int main()
{
    printf("CREATE A STACK OF :");int n;scanf("%d",&n);
    struct Stack* stack = createStack(n);
    printf("1. PUSH ELEMENT\n2. POP ELEMENT\n3. EXIT\n4. DISPLAY\n" );
    label:
    printf("CHOOSE A VALID OPTION : ");int c;scanf("%d",&c);
    while(c!=3)
    {
        if(c== 1){
          printf("NUMBER OF ELEMENTS TO BE INSERTED : ");int de;scanf("%d",&de);
          for (int i = 0; i < de; ++i)
          {
          printf("VALUE OF ELEMENTS TO BE INSERTED : ");int deu;scanf("%d",&deu);
          push(stack,deu);
          }
         // break;
        }  
        if(c== 2){
         printf("NUMBER OF ELEMENTS TO BE POPED : ");int dey;scanf("%d",&dey);
          for (int i = 0; i < dey; ++i)
          {
          //printf("VALUE OF ELEMENTS TO BE INSERTED : ");int deu;scanf("%d",&deu);
          printf("%d popped from stack\n", pop(stack));
          }
        }
        if(c== 4){
          printf("Elements present in stack : \n");
           while(!isEmpty(stack))
         {
        // print top element in stack
         printf("%d\n",peek(stack));
        // remove top element in stack
         pop(stack);
         }
         }

  if(c!=3)
    {goto label;}
    }
 
    return 0;
}