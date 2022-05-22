#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.ctie(NULL);cout.tie(NULL)

struct Node
{
 int data;
 Node *right,*left;

};

 Node * newNode(int daa)
 {
 	Node *temp=new Node;
 	temp->data=daa;
 	temp->right=NULL;
 	temp->left=NULL;
 	return temp;
 }

    vector<int> v;
    queue<Node *> q;
    
    vector<int> levelOrder(Node* node)
    {
      if(node!=NULL)
        {
        //v.push_back(node->data);
        q.push(node);
        }
        
        while(!q.empty())
        {
            if(q.front()->left!=NULL)
            {
              q.push(q.front()->left);    
            }
            
            if(q.front()->right!=NULL)
            {
              q.push(q.front()->right);    
            }
            v.push_back(q.front()->data);
            q.pop();
            
        }
        
      return v;
    }


int main()
{
	IOS;
	Node *root=newNode(1);
	Node *rootA=newNode(2);
	Node *rootB=newNode(3);
	root->left=rootA;
	root->right=rootB;
	
	vector<int> A;
	A=levelOrder(root);
	for(auto i: A)
		cout<<i<<" ";
return 0;
}
