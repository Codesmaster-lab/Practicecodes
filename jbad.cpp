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
      ll x;cin>>x;
      ll q,r;
      r=x%11;
      q=x/11;
      if(q>=(10*r))
      cout<<"YES";
      else
      cout<<"NO";
      cout<<endl;  
    }
return 0;
}
