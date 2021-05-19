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
       ll h,p,c=0;
       cin>>h>>p;
       while(p>0)
       {
       	h=h-p;
       	p=p/2;
       	if(h<=0)
       	{
       	    c=1;
       	    break;
       	}
       }
       
       cout<<c<<endl;
    }
return 0;
}
