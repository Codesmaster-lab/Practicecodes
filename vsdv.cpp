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
      int  n;cin>>n;
      int a[n];
      for(int i=0;i<n;i++)
       {
           cin>>a[i];
       }
        
        if(a[0]==a[1] && a[1]!=a[2])
        {
            cout<<3<<endl;        
        }
        else if(a[0]==a[2] && a[1]!=a[2])
        {
        cout<<2<<endl;
        }
        else if(a[1]==a[2] && a[1]!=a[0])
        cout<<1<<endl;
       else
       for(int i=3;i<n;i++)
       {
        if(a[i]!=a[0])
        {
          cout<<i+1<<endl;
          break; 
        }
       }   
    }
return 0;
}
