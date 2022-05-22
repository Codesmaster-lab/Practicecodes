#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int main()
{
	IOS;
	int n,q;cin>>n>>q;
	string s;cin>>s;
	int dp[n];
	dp[0]=((int)s[0]-'a'+1);
  // cout<<dp[0]<<" ";
   for (int i = 1; i < n; ++i)
   {
   	dp[i]=dp[i-1]+((int)s[i]-'a'+1);
    //  cout<<dp[i]<<" ";
   }
//cout<<endl;

	while(q--)
    {
    	int l,r;cin>>l>>r;
    	if(l>1)
    	cout<<dp[r-1]-dp[l-2]<<endl;
    else
    	cout<<dp[r-1]<<endl;
    } 

return 0;
}
