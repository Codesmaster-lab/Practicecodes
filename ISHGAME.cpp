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
       string  a,b;
       cin>>a>>b;
       ll l =b.size();
       ll g=a.size();
       for (ll i = 0; i < l; ++i)
        {
        	for (ll j = 0; j < g; ++j)
        	{
        		if(a[j]==b[i])
        			a.erase(a.begin()+j);
        	}
        }
        cout<<a<<endl; 
    }
return 0;
}
