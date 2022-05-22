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
       ll xa,xb,XA,XB;
       cin>>xa>>xb>>XA>>XB;
       int a,b;
       a=(XA%xa>0?(XA/xa)+1 : XA/xa);
       b=(XB%xb>0?(XB/xb)+1 : XB/xb);
       cout<<a+b<<endl;
    }
return 0;
}
