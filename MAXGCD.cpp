#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)

ll gcd(ll a, ll b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 

int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {ll g=0;
        ll n;cin>>n;
        for (ll i = 1; i <= n; i++)
        {
        	for (int j = i+1; j <= n; ++j)
        	{
        		g=max(gcd(i,j),g);
        	}
        }
    cout<<g<<endl;
    }

return 0;
}
