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
     ll n;cin>>n;
     char se[n];
     ll s,a;
     s=0;
     ll cnt=0;
	for (ll i = 0; i < n; ++i)
	{
		       se[i]='1';
               a=(ll)se[i]-(ll)'0' +s;
               s=a;
        for (ll j = 0; j <= i; ++j)
      	{
      		
      		ll l=j-i+1;
      		//cout<<s<<" "<<l<<endl;
      		if(s==l)
      			cnt++;
      	}
  
     }


            //cout<<v[n]<<endl;
            ll cnt=0;
            ll s;
      for (ll i = 1; i < n+1; ++i)
      {
      	for (ll j = i; j < n+1; ++j)
      	{
      		s=v[j]-v[i-1];
      		ll l=j-i+1;
      		//cout<<s<<" "<<l<<endl;
      		if(s==l)
      			cnt++;
      	}
      }
    cout<<cnt<<endl;
    }
return 0;
}
