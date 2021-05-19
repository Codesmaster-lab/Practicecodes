#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int main()
{
	IOS;
	ll n,m,k;
	cin>>n>>m>>k;
	ll sum,cnt=0;
    ll q[n];
	for (ll i = 0; i < n; ++i)
	{sum=0;
		for (ll j = 0; j < k; ++j)
		{
			ll a;cin>>a;
			sum+=a;
		}
		ll b;
		cin>>b;
		if(sum>=m && b<=10)
			cnt++;
	}
	cout<<cnt<<endl;

return 0;
}
