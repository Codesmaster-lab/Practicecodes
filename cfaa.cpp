#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)

int main()
{
	IOS;
	ll n;cin>>n;
    vector<int> v;
    for (int i = 0; i < n; ++i)
    {
    	int a;cin>>a;
    	v.push_back(a);
    }
    //sort(v.begin(), v.end());
    int dp[n+1];

   dp[0]=0;
    for (int i = 1; i <= n; ++i)
    {
    		
    		if(dp[i-1]+v[i-1]<0)
    		{
                dp[i]=dp[i-1];
    		}
    		else
    			dp[i]=dp[i-1]+v[i-1];
    }
    
    for (int i = n-1; i >= 0; i--)
    {
    	if(dp[i]>=0)
    	{
    		cout<<i<<endl;
    		break;
    	}

    }
return 0;
}
