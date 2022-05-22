#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {
      int n,m;
      cin>>n>>m;
      int a[n][m];
      int sum=0;
      for (int i = 0; i < n; ++i)
             {
             	for (int j = 0; j < m; ++j)
             	{
             		cin>>a[i][j];
             		sum+=a[i][j];
             	}
             }
      for (int i = 0; i < n; ++i)
             {
             	for (int j = 0; j < m; ++j)
             	{
             		if(a[i][j]<0);
             		{
             			if(a[i][j+1])
             		}
             	}
             }
                    
    }
return 0;
}
