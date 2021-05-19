#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
 
// A structure to represent a stack
struct StackNode {
    int data;
    struct StackNode* next;
};
 
struct StackNode* newNode(int data)
{
    struct StackNode* stackNode =
      (struct StackNode*)
      malloc(sizeof(struct StackNode));
    stackNode->data = data;
    stackNode->next = NULL;
    return stackNode;
}
 
int isEmpty(struct StackNode* root)
{
    return !root;
}
 
void push(struct StackNode** root, int data)
{
    struct StackNode* stackNode = newNode(data);
    stackNode->next = *root;
    *root = stackNode;
    printf("%d pushed to stack\n", data);
}
 
int pop(struct StackNode** root)
{
    if (isEmpty(*root))
        return INT_MIN;
    struct StackNode* temp = *root;
    *root = (*root)->next;
    int popped = temp->data;
    free(temp);
 
    return popped;
}
 
int peek(struct StackNode* root)
{
    if (isEmpty(root))
        return INT_MIN;
    return root->data;
}
 
int main()
{
    struct StackNode* root = NULL;
 


    //printf("CREATE A STACK OF :");int n;scanf("%d",&n);
    //struct Stack* stack = createStack(n);
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
          push(&root,deu);
          }
         // break;
        }  
        if(c== 2){
         printf("NUMBER OF ELEMENTS TO BE POPED : ");int dey;scanf("%d",&dey);
          for (int i = 0; i < dey; ++i)
          {
          //printf("VALUE OF ELEMENTS TO BE INSERTED : ");int deu;scanf("%d",&deu);
          printf("%d popped from stack\n", pop(&root));
          }
        }
        if(c== 4){
          printf("Elements present in stack : \n");
           while(!isEmpty(root))
         {
        // print top element in stack
         printf("%d\n",peek(root));
        // remove top element in stack
         pop(&root);
         }
         }

  if(c!=3)
    {goto label;}
    }
 
    return 0;



    push(&root, 10);
    push(&root, 20);
    push(&root, 30);
 
    printf("%d popped from stack\n", pop(&root));
 
    printf("Top element is %d\n", peek(root));
 
    return 0;
}