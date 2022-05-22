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
       int S,m;
       cin>>S>>m;
       if(S>2 && m>1)
       {
       long long int dp[S+1];

       dp[0]=1;

       for(int i=1;i<=S;i++)
       {
       	  dp[i]=0;
       	  for(int j=1;j<=m;j++)
       	  {
       	  	if(i-j>=0)
             {dp[i]+=dp[i-j];}
            else
            	break;
       	  }
       }

       cout<<dp[S]<<endl;  

    }
    else
      cout<<endl;
 }
return 0;
}
