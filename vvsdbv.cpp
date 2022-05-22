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
       for (ll i = 1; (i*i*i) < n; ++i)
       {
        long double b=cbrt(n-(i*i*i));
       	if(b-floor(b)==0.0)
       		{cout<<"YES"<<endl;goto lb;}
       }
       cout<<"NO"<<endl;
    lb:
    {}
    }
return 0;
}
