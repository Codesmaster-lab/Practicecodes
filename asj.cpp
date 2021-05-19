#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int main()
{
	IOS;
	ll ti;cin>>ti;
    while(ti--)
    {
       int mi,ni,ki;
       cin>>ni>>mi>>ki;
       if((mi*ni)-1 == ki)
       	cout<<"YES"<<endl;
       else
       	cout<<"NO"<<endl;
    }
return 0;
}
