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
     ll s,n;cin>>s>>n;
     ll cnt=0;
       
      //s=n*k+r;
      cnt=s/n;
      ll r=s%n;
   if(r==0)
   	cout<<cnt<<endl;
   else if(r%2==0 || r==1)
     cout<<cnt+1<<endl;
   
   else
   	cout<<cnt+2<<endl;
    }
return 0;
}
