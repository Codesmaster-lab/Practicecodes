#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)

struct node 
{
  bool visited;
  int value;
  vector <node *> adj;
  void newnode (int val)
  {
  	this->visited=false;
    this->value=val;
  }
};


void addedge(node a,node b)
  {
     a.adj.push_back(&b);
     b.adj.push_back(&a);     
  }

void printvect(vector <node *> a)
{vector <node*> :: iterator itr;
	//int n=a.size();
	for ( itr=a.begin(); itr!=a.end() ; ++itr)
	{
		cout<<" "<<((*itr)->visited);
	}
	cout<<endl;
}

int main()
{
	IOS;
   node n1,n2;
   n1.newnode(2);
   n2.newnode(3);

   addedge(n1,n2);

   printvect(n1.adj);
return 0;
}
