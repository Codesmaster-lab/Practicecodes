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
       ll ts,lp;cin>>ts;lp=ts;
       if(ts%2!=0)
       {
       	cout<<(ll)(ts/2)<<endl;
       }
       else
       {
       	ll i=0;
       	while((ts%2) ==0)
       	{
       		i++;
       		ts=(ts/2);
       		
       	}
     // cout<<ts<<i<<endl;
       	i=i+1;ll p=pow(2,i);
        ts=ts-2;ll cnt=0;
        while(ts>=1)
        {
        	ll k=ts;//cout<<k<<endl;
        	//cout<<p<<endl;
        	k=k*p;//cout<<k<<endl;

        	while(k<=lp)
        	{
        		cnt++;
        		k=k*2;
        		//cout<<k<<endl;
        	}
        	ts=ts-2;
        }
         cout<<cnt<<endl;  
       }
    }
return 0;
}

