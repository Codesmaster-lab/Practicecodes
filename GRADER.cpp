#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {int A[70][70];
       int x,n,p;cin>>n>>p;
      int i=1;
      while(i<=n)
      {
      	for(int j=1;j<=n;j++)
      	{
      	 int c;
         cout<<1<<" "<<i<<" "<<j<<" "<<i<<" "<<j<<endl;
         cin>>c;
         if(c==1)
         	A[i-1][j-1]=1;
         else
         	A[i-1][j-1]=0;
         }
         i++;
      }  
      cout<<2<<endl;
      for (int i = 0; i < n; ++i)
          {
          	for (int j = 0; j < n; ++j)

          	{
          		cout<<A[i][j]<<" ";
          	}
          	cout<<endl;
          }    
      cout<<endl;
      int v;cin>>v;
      if(v)
      	continue;
      else
      	break;
    }
return 0;
}

/*
*/