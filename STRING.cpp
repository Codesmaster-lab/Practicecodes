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
      ll n,a,b,sum=0;cin>>n;
      cin>>a;
  
      for (ll i = 0; i < n-1; ++i)
             {
             	cin>>b;
             	sum+=(abs(b-a)-1);
             	a=b;
             }       

      cout<<sum<<endl;       
    }
return 0;
}
