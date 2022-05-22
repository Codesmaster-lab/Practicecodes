#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)

int nthUglyNumber(int n) {
       vector<int> v;
        
        v.push_back(2);
        v.push_back(3);
        v.push_back(5);
        
        vector<int> dp;
        dp.push_back(0); dp.push_back(1);
        int i=2;
        int cnt=1;
        while(cnt<n)
        {
            dp.push_back(0);
            for(auto j: v)
            {
                if(j<=i && i % j==0 && dp[i/j]==1)
                {
                    dp[i]=1;
                    break;
                }
            }
            
            cout<<dp[i]<<" "<<cnt<<endl; 
            if(dp[i])
                cnt++;
           i++; 
        }
        return i-1;
    }

int main()
{
	IOS;
	ll t;cin>>t;
    cout<<nthUglyNumber(t);
return 0;
}

