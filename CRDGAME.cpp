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
       ll a,b;
       cin>>a>>b;
       ll cnt=0;
       cnt=a/9;
       cnt+=(a%9==0?0:1);
       ll cnt1=0;
       cnt1=b/9;
       cnt1+=(b%9==0?0:1);    
       if(cnt==cnt1)
       cout<<1<<" "<<cnt1;
       else if(cnt<cnt1)
       cout<<0<<" "<<cnt;
       else
       cout<<1<<" "<<cnt1;
       cout<<endl;   
    }
return 0;
}
