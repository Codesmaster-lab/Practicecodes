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
      if(n<9)
      	cout<<0<<endl;
      else
      {
       ll k=n/10;
       k*=10;
       k+=9;
       if(k>n)
       {
       	k=k/10;
       	cout<<k<<endl;
       }	
       else
       {
       	k=k/10;
        cout<<k+1<<endl;
       } 
       }       
    }
return 0;
}
