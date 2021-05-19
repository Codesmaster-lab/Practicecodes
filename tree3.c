
#include<stdio.h>
#include<stdlib.h>
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

bool isleaf(struct node* temp)
{
    if(temp!=NULL)
    {
       if(temp->right==NULL && temp->left==NULL)
        return true;
        else
            return false;
    }
    else
        return false;
}

void delete_aleaf(struct node * root)
{
   struct node* temp;
   temp=root;

 if(isleaf(temp->right))
 {
    printf("\nA leaf node with value %d is deleted \n",root->right->value);
  root->right=NULL;
  return;

 }
else
{
  
    delete_aleaf(temp->right);
}
}

bool isnodew1clhd(struct node *temp)
{
    if(temp==NULL)
        return false;
    else if((temp->right==NULL && temp->left!=NULL)||(temp->right!=NULL && temp->left==NULL))
        return true;
    else
        return false;
}

bool isnodew2clhd(struct node *temp)
{
    if(temp==NULL)
        return false;
    else if((temp->right!=NULL && temp->left!=NULL))
        return true;
    else
        return false;
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


int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

struct node * create_BST(int a[],int str,int end)
{

if(str<=end)
{
  int mid=(end+str)/2;
  struct node *temp;
  temp=newNode(a[mid]);
  temp->left= create_BST(a,str,mid-1);
  temp->right=create_BST(a,mid+1,end);
  return temp;
}
else
return NULL;
   
   
}


struct node * retnodew1chld(struct node *root)
{
if(isnodew1clhd(root->left))
    return root;
else if(isnodew1clhd(root->right))
    return root;
{
   struct node *temp=  retnodew1chld(root->left);
if( temp!=NULL)
    return temp;
else
return(retnodew1chld(root->right));
}
}

void delete_anodew1chld(struct node *root)
{
  struct node *temp;
  temp=retnodew1chld(root);

  if(isnodew1clhd(temp->left))
    {if(temp->left->left!=NULL)
  {
    printf("The node with value %d is deleted which was having 1 child\n",temp->left->value );
    temp->left=temp->left->left;

  }
  else
  {   
    printf("The node with value %d is deleted which was having 1 child\n",temp->left->value );
    temp->left=temp->left->right;    
  }}
  else
    {if(temp->right->left!=NULL)
  {
    printf("The node with value %d is deleted which was having 1 child\n",temp->right->value );
    temp->right=temp->right->left;

  }
  else
  {   
    printf("The node with value %d is deleted which was having 1 child\n",temp->right->value );
    temp->right=temp->right->right;    
  }}

}

struct node *  delete_anodew2chld(struct node *root,int a[],int n)
{
   if(isnodew2clhd(root))
   { 
  int k=root->value;
  int b[100];
  int cnt=0;
  for (int i = 0; i < n; ++i)
  {

      if(a[i]!=k )
        {
            b[cnt]=a[i];
            cnt++;
        }
  }
  
  root=create_BST(b,0,n-2);
  printf("The node with value %d is deleted which was having 2 children\n",k);
  }
   else if(isnodew2clhd(root->right))
  {
  int k=root->right->value;
  int b[100];
  int cnt=0;
  for (int i = 0; i < n; ++i)
  {

      if(a[i]!=k )
        {
            b[cnt]=a[i];
            cnt++;
        }
  }
  
  root=create_BST(b,0,n-2);
  
  printf("The node with value %d is deleted which was having 2 children\n",k);
  }
  else if(isnodew2clhd(root->left))
  {
     int k=root->left->value;
  int b[100];
  int cnt=0;
  for (int i = 0; i < n; ++i)
  {

      if(a[i]!=k )
        {
            b[cnt]=a[i];
            cnt++;
        }
  }
  
  root=create_BST(b,0,n-2);
  
  
  root=create_BST(a,0,n-2);
  printf("The node with value %d is deleted which was having 2 children\n",k);
  }
  else
    {
        delete_anodew2chld(root->right,a,n);
        delete_anodew2chld(root->left,a,n);
    }

   return(root); 
}

int main()
{

printf("Enter number of elements : ");
int n;scanf("%d",&n);
int a[100];
  printf("Enter  an array of unique integers : \n");
  for (int i = 0; i < n; ++i)
  {
      scanf("%d",&a[i]);
  }

struct node *root;
qsort(a, n, sizeof(int), cmpfunc);
root=create_BST(a,0,n-1);
printf("PREORDER TRAVERSAL OF THE PRESENT TREE : ");
preorder(root);
printf("\n\n");
root=(
delete_anodew2chld(root,a,n));
printf("PREORDER TRAVERSAL OF THE PRESENT TREE : ");
preorder(root);
printf("\n\n");
delete_anodew1chld(root);
printf("PREORDER TRAVERSAL OF THE PRESENT TREE : ");
preorder(root);
printf("\n");
delete_aleaf(root);
printf("PREORDER TRAVERSAL OF THE PRESENT TREE : ");
preorder(root);
printf("\n");
	return 0;
}