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
       int n,k;cin>>n>>k;
       int a[n];
       for (int i = 0; i < n; ++i)
              {
              	cin>>a[i];
              }

              int en=n-1;      
       for (int i = 0; i < n && k>0; ++i)
               {

               	if(a[i]>=k)
               	{
               		a[i]-=k;
               		a[en]+=k;
               		k-=k;
               	}
               	else
               	{
               		int o=a[i];
               		a[i]=0;
               		a[en]+=o;
                    k-=o;
               	}	
               	

               }


        for (int i = 0; i < n; ++i)
                       {
                       	/* code */
                       	cout<<a[i]<<" ";

                       }
                       cout<<endl;               
    }
return 0;
}
