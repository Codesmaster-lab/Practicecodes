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
    	ll sum=0,sumi=0;
       ll n,k;cin>>n>>k;
       for (int i = 0; i < n; ++i)
       {
       	ll a;cin>>a;
       	if(a>k)
       		sum+=k;
       	else
       		sum+=a;
       	sumi+=a;
       }
       cout<<(sumi-sum)<<endl;
    }
return 0;
}
