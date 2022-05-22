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
      int n,m;
      int r[n],b[m];
      cin>>n; int sum=0;
       
       for (int i = 0; i < n; ++i)
       {
       	cin>>r[i];
       	sum+=r[i];
       }
       cin>>m;
       for (int i = 0; i < m; ++i)
       {
       	cin>>b[i];
       	sum+=b[i];
       }
     cout<<sum<<endl;
       int i=n-1;
       while(r[i]<=0)
       {
         sum=sum-r[i];
       	 cout<<sum;
       	i-=1;
       }

        i=m-1;
       while(b[i]<=0)
       {
         sum=sum-b[i];
         cout<<sum;
       	 i-=1;
       }
cout<<sum<<endl;
    }
return 0;
}
