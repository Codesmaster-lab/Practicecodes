#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
ll power(ll base , ll n)
{
	// initialize ans = 1;
	ll ans = 1;
	while(n>0)
	{
		// whenever power is odd , club it with the ans
		if(n%2)ans = (ans*base)%MOD;
 
		base = (base * base)%MOD; // make base square each time
 
		n>>=1;  // each time divide the power by 2
	}
	return ans;
}


int main()
{
	IOS;
	ll maz=1000000007;
	ll t;cin>>t;
    while(t--)
    {
       ll n,m;
       cin>>n>>m;
       ll ans=power((power(2,n)-1),m)%MOD;
       cout<<ans<<endl;      
    }
return 0;
}
