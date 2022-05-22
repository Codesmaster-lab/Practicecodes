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
      int n,m;cin>>n>>m;
      char s[n][m];
      int indx,indy,c=0;
      char cg
      for (int i = 0; i < n; ++i)
             {
             	for (int j = 0; j < m; ++j)
             	{
             		cin>>s[i][j];
             		if(c==0 && (s[i][j]=='R'||s[i][j]=='W'))
             		{
             			indx=i;
             			indy=j;
             			cg=s[i][j];
             			c=1;
             		}
             	}
             } 
     if((indx+indy)%2==0)
     	c=0;
    else
    	c=1;

      for (int i = 0; i < n; ++i)
             {
             	for (int j = 0; j < m; ++j)
             	{
                   if((i+j)%2==c)
             		s[i][j];
             	}
             	cout<<endl;
             }      

    }
return 0;
}
