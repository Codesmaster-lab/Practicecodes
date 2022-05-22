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
      vector<int> r,b;
      cin>>n; int sum=0;
       
       for (int i = 0; i < n; ++i)
       {int ri;
       	cin>>ri;
        r.push_back(ri);
       	sum+=ri;
       }
       cin>>m;
       for (int i = 0; i < m; ++i)
       {int bi;
       	cin>>bi;
        b.push_back(bi);
       	sum+=bi;
       }
     //cout<<sum<<endl;
       int i=n-1;
       for(i=n-1;(r[i]<=0 && i>=0);i--)
       {
        //cout<<sum<<r[i];
         sum=sum-r[i];
       	 //cout<<sum<<endl;
       }
        for(i=m-1;(b[i]<=0 && i>=0);i--)
       {
        //cout<<sum<<r[i];
         sum=sum-b[i];
         //cout<<sum<<endl;
       }

      

if(sum<0)
  cout<<0<<endl;
else
cout<<sum<<endl;
    }
return 0;
}
