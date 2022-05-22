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
      vector<int> v;
      for(int i=0;i<n;i++)
      {
           int a;
           cin>>a;
           v.push_back(a);
      }
      sort(v.begin(), v.end()) ;      
    double sum=0.0;
    for (int i = 0; i < n-1; ++i)
    
    {
    	sum+=v[i];
    }
sum=sum/(n-1);
sum+=v[n-1];
cout<<setprecision(9)<<sum<<endl;
    }
return 0;
}
