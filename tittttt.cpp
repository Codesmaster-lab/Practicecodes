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
       int n,k;
       cin>>n>>k;
       int a[n];
       for (int i = 0; i < n; ++i)
              {
              	cin>>a[i];
              	if(a[i]-k >=0 && index ==0)
              	{
              		index=i;
              	}
              }
                     
    }
return 0;
}
