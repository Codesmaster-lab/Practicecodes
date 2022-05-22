#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)

void swap(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}
void printv(std::vector<int> v)
{
	int n=v.size();
	for (int i = 0; i < n; ++i)
	{
	   cout<<v[i]<<" ";
	}
	cout<<endl;
}

void permut(vector<int> v,int l,int r)
{
	if(l==r)
		printv(v);
	else
	{
		for (int i = l; i <= r; ++i)
		{
		    swap(&v[l],&v[i]);
		    permut(v,l+1,r);
		    swap(&v[i],&v[l]);
		}
	}
}


int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {
      int n;cin>>n;
      vector<int> v;
      for (int i = 0; i < n; ++i)
             {
             	int a;cin>>a;
             	v.push_back(a);
             } 
       permut(v,0,n-1);            
    }
return 0;
}
