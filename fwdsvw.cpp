#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)

ll isprime(ll n)
{
	if(n==2)
		return -1;
	else
	{
		for (ll i = 2; i < n; ++i)
		{
		 if(n%i==0)
		   {return i;break;}  
		}
		return -1;
	}
}


int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {
       ll n,k;
       cin>>n>>k;
       ll i=isprime(n);
       if(i==-1)
       {
       	 n=2*n;
       	 ll o=n+((k-1)*2);
         cout<<o<<endl;
       }       
       else
       {ll o;
       	 if(n%2==0)
       	  o=n+(k*2);
       	else
          o=n+i+(k-1)*2;
       		cout<<o<<endl;
       }
    }
return 0;
}
