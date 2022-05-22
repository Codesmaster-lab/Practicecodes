#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int main()
{
	IOS;
	ll n,k,x;cin>>n>>k>>x;
	vector<int> v;
	for (ll i = 0; i < n; ++i)
	{
		int a;cin>>a;
		v.push_back(a);
	}

	sort(v.begin(),v.end());

     ll cnt=1;
	for(ll i=1;i<n;i++)
	{
		if(v[i]-v[i-1]>x)
			{
				if(k>0)
				{
                  
				}
				else
				 cnt++;
			}
	}
    
return 0;
}
