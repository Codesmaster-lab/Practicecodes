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
      int p ,q,r ,a,b,c;
       cin>>p>>q>>r;
       cin>>a>>b>>c;
       int x,y,z;
       x=(a-p);
       y=b-q;
       z=c-r;
       if(x<0 || y<0 || z<0)
       	cout<<-1;
       else
       cout<<x+y+z;
       cout<<endl; 


    }
return 0;
}
