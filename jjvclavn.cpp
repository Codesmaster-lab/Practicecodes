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
      int n;cin>>n;
      string s;cin>>s;
      int dp[5][n+1];
      string a;
      a="2020";
      int c=0;
      int maxi=0;
      for (int i = 0; i < 5; ++i)
             {
             	for (int j = 0; j < n+1; ++j)
             	{
             		if(i==0 || j==0)
             			dp[i][j]=0;
             		else if(a[i-1]==s[i-1])
             			{
             				dp[i][j]=maxi+1;
             				maxi=max(maxi,dp[i][j]);
             				if(dp[i][j]==4)
             				{
                              c=1;
                              goto label;
             				}
             			}
             		else
             		dp[i][j]=0;	

             	}

             }       
    label:
    if(c)
    	cout<<"YES";
    else
    	cout<<"NO";
    cout<<endl;
    }
return 0;
}
