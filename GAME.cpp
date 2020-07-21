#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
ll count(ll a)
{
	ll r=0;
	while(a!=0)
	{
		r+=a%10;
		a=a/10;

	}
	return r;
}

int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {
       ll n;cin>>n;
       ll a=0,b=0;
       for (ll i = 0; i < n; ++i)
              {
              
     	ll x,y;cin>>x>>y;ll v=count(x),w=count(y);
              	if(v>w)
              		a+=1;
              	else if(v<w)
              		b+=1;
              	else
              		{a++;b++;}

              }  
        if(a>b)
        cout<<0<<" "<<a;
        else if(a<b)
        cout<<1<<" "<<b;
        else
        cout<<2<<" "<<a;
        cout<<endl;           
    }
return 0;
}
