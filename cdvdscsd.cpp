#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int main()
{
	IOS;
	string s,x;
	cin>>s>>x;
	int k;
	cin>>k;
	int n=s.size();
	int good=0;
	int bad=0;
	int dp[2][n];
	for(int i=0;i<n;i++)
	{
       
       if(x[s[i]-'a']=='1' && i==0)
       	{dp[0][i]=1;dp[1][i]=0;}
       else
       {
          if(x[s[i]-'a']=='1' && i==0)
          	{dp[0][i]=dp[0][i-1]+1;dp[1][i]=dp[1][i-1];}
          else
          {dp[1][i]=dp[1][i-1]+1;dp[0][i]=dp[0][i-1];}
       }  
	}
return 0;
}
