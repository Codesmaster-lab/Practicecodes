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
       ll x,y;
       int k=n%3;
       if(k==2)
       {
        x=n/3;
       	y=x+1;
       	
       	cout<<x<<" "<<y<<endl;
      
       }
       else
       {y=n/3;
       	x=y+k;
       	cout<<x<<" "<<y<<endl;
       }
    }
return 0;
}
