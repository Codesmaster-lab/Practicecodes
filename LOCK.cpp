#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		ll n,r;cin>>n>>r;
		std::vector<ll> v;
		for (ll i = 0; i < n; i++)
		{ll a;
			cin>>a;v.push_back(a);
		}
		for (ll i = 0; i < n; i++)
		{
			int k=((i+r)%n);
			cout<<v[k]<<" " ;
		}
		cout<<endl;
	}
	return 0;
}