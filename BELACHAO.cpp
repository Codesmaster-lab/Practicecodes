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
       ll D,d,P,Q;
       cin>>D>>d>>P>>Q;
       ll mone=0;
       while(D>0)
       {
       	if(D>=d)
       	{
       	    ll n=D/d;
       		mone+=(((P*n)+((n*(n-1))*Q)/2)*d);
       		D-=(n*d);
       		P+=(n*Q);
       	}
       	else
       	{
       		mone+=P*D;
       		D=0;
       	}
       }
       cout<<mone<<endl;
    }
return 0;
}
