
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

bool check_strictlybinary(struct node *root)
{
	if(root == NULL)
		return true;
	else
	{
		if(root->right==NULL && root->left!=NULL)
			{return false;}
		else if(root->right!=NULL && root->left==NULL)
			{return false;}
		else
			return (check_strictlybinary(root->right) && check_strictlybinary(root->left)  );
	}
}

bool isfull(struct node *root)
{
	if(root!=NULL)
	{
	    if(root->right!=NULL && root->left!=NULL)
			return true;
		else
			return false;
	}
	else
		return false;
}

bool isleaf(struct node *root)
{
	if(root!=NULL)
	{
	    if(root->right==NULL && root->left==NULL)
			return true;
		else
			return false;
	}
	else
		return false;
}


bool check_completebinary(struct node *root)
{
	
	if(root!=NULL)
		{
		if(isfull(root))
			{
				return ( (check_completebinary(root->left) && (check_completebinary(root->right))));
			}
		else if(isleaf(root))
			{
               /*  if(root->right==NULL && root->left!=NULL)
			      {return(isleaf(root->left));}
		         else if(root->right!=NULL && root->left==NULL)
			      {return(isleaf(root->right));}
			      else
			    */
			    	return( true);
			}
		else 
			{
               return (isleaf(root->left) || isleaf(root->right) );
			}
		}
	else
	 return true;		

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
int main()
{
printf("EXAMPLE 1:\n");
    struct node *root;
    root=newNode(1);
    printf("\t\t%d\n",root->value);
    root->left = newNode(2);
    printf("\t%d",root->left->value);
    root->right = newNode(3);
    printf("\t\t%d\n",root->right->value);
    root->left->left = newNode(4);
    printf("%d",root->left->left->value);
    root->left->right = newNode(5);
    printf("\t\t%d",root->left->right->value);
    

    printf("\n\n");

     if(check_strictlybinary(root))
       printf("YES this is a strictly binary tree\n");
     else
     	printf("NO this is not a strictly binary tree\n");

    if(check_completebinary(root))
       printf("YES this is a complete binary tree\n");
     else
     	printf("NO this is not a complete binary tree\n");

printf("\nEXAMPLE 2:\n");
 root = newNode(18);
root->left     = newNode(15);
root->right = newNode(30);
root->left->left = newNode(40);
root->left->right = newNode(50);
root->left->left->left = newNode(8);
root->left->left->right = newNode(7);
root->left->right->left = newNode(9);
root->right->right = newNode(40);
root->right->left = newNode(100);

 printf("\t\t\t%d\n",root->value);
    
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
      printf("\n\n");

     if(check_strictlybinary(root))
       printf("YES this is a strictly binary tree\n");
     else
     	printf("NO this is not a strictly binary tree\n");

    if(check_completebinary(root))
       printf("YES this is a complete binary tree\n");
     else
     	printf("NO this is not a complete binary tree\n");

	return 0;
}