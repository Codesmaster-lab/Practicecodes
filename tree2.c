
#include<stdio.h>
#include<malloc.h>

struct node
 {
 	int value;
 	struct node *right= NULL;
 	struct node *left = NULL;
 }; 

 struct node* newNode(int data)
{
	struct node* nodee= (struct node*)malloc(sizeof(struct node));
	nodee->value = data;
	nodee->left = NULL;
	nodee->right = NULL;

	return (nodee);
}


void preorder(struct node *root)
{
	     
if(root==NULL)
	return;

	     //printf("sfsf"); 
		printf("%d ",root->value);
		preorder(root->left);
		preorder(root->right);

}


void inorder(struct node *root)
{
	     
if(root==NULL)
	return;

	     //printf("sfsf"); 
		inorder(root->left);
		printf("%d ",root->value);
		inorder(root->right);

}

void postorder(struct node *root)
{
	     
if(root==NULL)
	return;

	     //printf("sfsf"); 
		postorder(root->left);
		postorder(root->right);
		printf("%d ",root->value);
		
}


int main()
{
printf("EXAMPLE 1:\n\n");
    struct node *root;
    root=newNode(5);
    printf("\t\t%d\n",root->value);
    root->left = newNode(3);
    printf("\t%d",root->left->value);
    root->right = newNode(6);
    printf("\t\t%d\n",root->right->value);
    root->left->left = newNode(1);
    printf("%d",root->left->left->value);
    root->left->right = newNode(4);
    printf("\t\t%d",root->left->right->value);
    

  printf("\n\nPREORDER TRAVERSAL:\n");
    preorder(root);
    printf("\nINORDER TRAVERSAL:\n");
    inorder(root);
    printf("\nPOSTORDER TRAVERSAL:\n");
    postorder(root);  



     
printf("\n\nEXAMPLE 2:\n\n");
 root = newNode(50);
root->left     = newNode(30);
root->right = newNode(80);
root->left->left = newNode(20);
root->left->right = newNode(40);
root->left->left->left = newNode(8);
root->left->left->right = newNode(25);
root->left->right->left = newNode(26);
root->right->right = newNode(100);
root->right->left = newNode(60);

 printf("\t\t\t   %d\n",root->value);
    
    printf("\t\t%d",root->left->value);
    
    printf("\t\t\t%d\n",root->right->value);
    
     printf("\t%d",root->left->left->value);
   
    printf("\t\t%d  ",root->left->right->value);

     printf("\t%d",root->right->left->value);
   
    printf("\t\t%d\n",root->right->right->value);
    
    printf("%d",root->left->left->left->value);
    
    printf("\t\t%d",root->left->left->right->value);
 
   printf("\t%d",root->left->right->left->value);

    
    
   // inorder(root);

    printf("\n\nPREORDER TRAVERSAL:\n");
    preorder(root);
    printf("\nINORDER TRAVERSAL:\n");
    inorder(root);
    printf("\nPOSTORDER TRAVERSAL:\n");
    postorder(root);     
	return 0;
}