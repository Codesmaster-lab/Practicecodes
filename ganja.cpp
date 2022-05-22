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
     string sa,sb;cin>>sa>>sb;
     int a,b;
     a=sa.size();
     b=sb.size();
    
     int dp[a+1][b+1];

  int len=INT_MIN;
     for(int i=0;i<a+1;i++)
     {
     	for (int j = 0; j < b+1; ++j)
     	{
     		if(i==0 || j==0)
     		dp[i][j]=0;
     	    else if(sa[i-1]==sb[j-1])
     	    	{
     	    		dp[i][j]=dp[i-1][j-1]+1;
     	    		len=max(dp[i][j],len);
     	    	}
     	    else
     	      dp[i][j]=0;	
     	}
     }


     cout<<a+b-2*len<<endl;
    }
return 0;
}
