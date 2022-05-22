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
        int n;cin>>n;
        int a[n];
        for (int i = 0; i < n; ++i)
               {
               	cin>>a[i];
               } 
         sort(a,a+n);
         int ind,i;
         for ( i = 1; i < n; ++i)
                     {
                         if(a[i]!=a[i-1])
                         {
                             
                         	break;
                         }
                     }
                     ind=n-i;
         cout<<ind<<endl;                        
    }
return 0;
}
