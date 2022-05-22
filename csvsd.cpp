#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)

bool isnotsame(vector<int> A,vector<int> B)
{
	int c=0;
	for(auto i: A)
	{
      if(i!=B[c])
      	return true;
     c++;
	}
	return false;
}
int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {
      int n,m;
      cin>>n>>m;
      int A[n][m],B[n][m];
      for(int i=0;i<n;i++)
     {
     	for(int j=0;j<m;j++)
     	{
           cin>>A[i][j];
           B[i][j]=A[i][j];
     	}
     }       

  for(int i=0;i<n;i++)
  {
  	sort(B[i],B[i]+m);
  }

int c=0;
vector<int> v;
  for(int j=0;j<m;j++)
  {
  	
      vector<int> x,y;

      for(int i=0;i<n;i++)
      {
      	x.push_back(A[i][j]);
      	y.push_back(B[i][j]);
      }

  		if(isnotsame(x,y))
  			{
  				c++;
  				v.push_back(j);
  			}

  		if(c>2)
  		{
  			goto label;
  		}
  	
  }

  label:
    if(c==1 || c>2)
    	cout<<-1<<endl;
    else if(c==0)
    	cout<<1<<" "<<1<<endl;
    else
    {
    	cout<<v[0]+1<<" "<<v[1]+1<<endl;
    }

    }
return 0;
}
