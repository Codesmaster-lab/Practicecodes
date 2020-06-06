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
      ll k=1;
      for (ll i = 1; i <= n; ++i)
             {
             	if(i%2==1)
             	{
                  for(ll j=k;j<=(n*i);j++)
                  {cout<<j<<" ";}
                 k=k+n;
             	}
                else
                {
                  for(ll j=(n*i);j>=k;j--)
                  {cout<<j<<" ";}
                 k=k+n;	
                }
                cout<<endl;
             }       
    }
return 0;
}
