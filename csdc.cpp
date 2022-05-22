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
      int n,q;cin>>n>>q;
      string s;
      cin>>s;
       
      int dp[n];
      for (int i = 0; i < n; ++i)
       {
       	
       	if(i<2)
       		dp[i]=0;
       	else
       	{
       		
           dp[i]=dp[i-1]+(i+1)/2;
       	}

       } 

      while(q--)
      {
      	int l,r;cin>>l>>r;
        if(dp[r-1]-dp[l-1])
        	cout<<"YES";
        else
        	cout<<"NO";
        cout<<endl;
      } 
            
    }
return 0;
}
