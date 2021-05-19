#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int main()
{
	IOS;
	ll n;cin>>n;
	std::vector<ll> neg,pos;
	for (ll i = 0; i < n; ++i)
	{
	   ll a;cin>>a;
	   if(a<0)
	   	neg.push_back(a);
	   else if (a>0)
	   	pos.push_back(a);
       
	}
	ll nu=neg.size(),pu=pos.size();
	cout<<1<<" "<<neg[0]<<endl;
	if(nu%2==0)
	{cout<<pu+nu-2<<" ";
      for (ll i = 2; i < nu; ++i)
          {
          	cout<<neg[i]<<" ";
          }
       for (ll i = 0; i < pu; ++i)
              {
              	cout<<pos[i]<<" ";
              }       
              cout<<endl;
	 cout<<2<<" "<<0<<" "<<neg[1];}
    else
    {
    	cout<<pu+nu-1<<" ";
         for (ll i = 1; i < nu; ++i)
          {
          	cout<<neg[i]<<" ";
          }
       for (ll i = 0; i < pu; ++i)
              {
              	cout<<pos[i]<<" ";
              }
              cout<<endl;
		cout<<1<<" "<<0;
    }

     
return 0;
}
