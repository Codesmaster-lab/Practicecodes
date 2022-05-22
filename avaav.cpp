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
      ll a,b,c;
      cin>>a>>b>>c;
      ll x,y,z;
      z=c;
      y=b+c;
      x=a+b+c;

      cout<<x<<" "<<y<<" "<<z<<endl;
    }
return 0;
}
