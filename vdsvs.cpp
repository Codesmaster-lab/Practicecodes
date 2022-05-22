#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int main()
{
	IOS;

      ll n,k,x;
      cin>>n>>k>>x;
      vector<ll> v;
      for(ll i=0;i<n;i++)
      {
      	ll a;cin>>a;
        v.push_back(a);
      }
      sort(v.begin(), v.end())   ;
      

      ll gp=0;
      
      for(ll i=1;i<n;i++)
      {cout<<v[i]<<" ";
        if(v[i]-v[i-1]>x)
        {
           ll c=v[i]-v[i-1];
           double cv=c/(double)x;
           ll cb=c/x;
           if(cv-cb==0)
             cb=cb-1;
          if(k==0)
          {
             gp++; 
          }
          else if(k>=cb)
            {k-=cb;}
          else
          {
            k=0;
            gp+=1;  
          }
        }
      }
      cout<<gp+1<<endl;


return 0;
}
