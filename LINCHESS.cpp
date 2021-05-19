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
    	ll min=INT_MAX,c=0;
         ll n,k;cin>>n>>k;
         for (ll i = 0; i < n; ++i)
             {ll a;cin>>a;
             	if (a<=k && k%a==0)
             	{
             			if((k/a) <= min )
                         { min=k/a;c=a;}
     
             	}

             }    
         if(c)
         cout<<c<<endl;
         else
         cout<<-1<<endl;    
    }
return 0;
}
