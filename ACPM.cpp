#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int main()
{
	IOS;
	ll n,k,c=0;
	cin>>n>>k;
	for (ll j = 0; j < n; ++j)
	{
		ll a;
		cin>>a;
		a=a+k;
		if(a<=5)
			c++;

	}
	cout<<(int)(c/3)<<endl;
return 0;
}
