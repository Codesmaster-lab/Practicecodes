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
        int a[n] ;
        for (int i = 0; i < n; ++i)
              {
              	cin>>a[i];
              }
              sort(a,a+n);
        if(n>2)
        {
        int k;
        int mini=INT_MAX;
        for (k = 1; k <n; ++k)
        {
        	if(k<=n/2)
        	{
        	 if(mini>=a[k]-a[k-1])
        	 {
        	 	mini=a[k]-a[k-1];
        	 }
            }
          else
            {
              
        	 if(mini>a[k]-a[k-1])
        	 {
        	 	mini=a[k]-a[k-1];
        	 }

            }
        }
        cout<<mini<<endl;}
        else 
        cout<<a[1]-a[0]<<endl;            
    }
return 0;
}
