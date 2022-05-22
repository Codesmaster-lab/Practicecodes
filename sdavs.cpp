#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int main()
{
	IOS;
	ll n,k;cin>>n>>k;
    ll sum=0;
    for (ll i = 0; i < n; ++i)
    {
    	ll a;cin>>a;
    	sum+=(a%k);
    }
    cout<<sum<<endl;
return 0;
}
