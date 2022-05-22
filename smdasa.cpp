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
     ll k=abs(a-b);
     if( c>(2*k) || a>2*k|| b>2*k)
     	cout<<-1;
     else if((k+c)>(2*k))
     	if(c>k)
      cout<<c-k;
      else
        cout<<-1;
     else
     	cout<<(k+c);
     cout<<endl;

    }
return 0;
}
