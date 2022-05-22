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
       int cm[n];
       int dp[n];
       
       for (int i = 0; i < n; ++i)
       {
       	dp[i]=0;
       	cin>>cm[i];
       }


       for (int j = n-1;  j>=0; j--)
        {
        	for (int i = j; i >= max(j-cm[j]+1 ,0) ; i--)
        	{
        		dp[i]=1;
        	}
         //j=j-cm[j];

        }


       for (int i = 0; i < n; ++i)
       {
       	cout<<dp[i]<<" ";
       }

       cout<<endl;
    }
return 0;
}
