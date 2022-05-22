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
      ll n,y,x;
      cin>>n>>x>>y;
      ll k=y/x;
      ll sum=0;

      if(n>=k)
      {
      sum+=(n-k)*k;
      sum+=((k-1)*k)/2;
      }
      else
      {
         sum+=(n*(n-1))/2;   
      }


      cout<<sum<<endl;
    }
return 0;
}
