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
     int a,b;cin>>a>>b;
     
     if(a==b)
     	cout<<4*a*b<<endl;

     else if(a>b)
     {
        if( 2*b >= a)
        {
          cout<<4*b*b<<endl;
        }
        else 
        {
          cout<<(a)*(a)<<endl;
        }
     } 
     else
     {
            if( 2*a >= b)
        {
          cout<<4*a*a<<endl;
        }
        else
        {
          cout<<(b)*(b)<<endl;
        }
     }


    
     
    }
return 0;
}
