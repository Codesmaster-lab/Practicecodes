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
     ll sum=0;
     for (int i = 0; i < n; ++i)
            {
            	int a;cin>>a;
            	sum+=a;
            }
       if(sum%n==0)
       {
       	cout<<0<<endl;
       }       
       else
       {
       	ll k=sum%n;
       	cout<<(n-k)*(k)<<endl;
       }     
    }
return 0;
}
