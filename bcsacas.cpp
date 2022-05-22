#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int main()
{
	IOS;

     ll n,m,a;cin>>n>>m>>a;
     ll b=(n*m)/(a*a);
     //int c=m/a;
      ll sum=b;
   if((n*m)>=(a*a))
     {
     	if((n*m)%(a*a)!=0)
       {sum+=(n%a!=0?1:0);
       	sum+=(m%a!=0?1:0);
       }      
    }
    else
    	sum=1;
     cout<<sum<<endl;
             
    
return 0;
}
