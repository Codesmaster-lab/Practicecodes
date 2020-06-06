#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {ll cnt=0;
      ll n,m;cin>>n>>m;
      if(m%2==1)
      {
      	cnt+=((m/2)+1);
      	
      }  
      else
      	{cnt+=(m/2);}
      if((n-1)%2==0)
      {
      	cnt+=(((n-1)/2)*m);
      }
      else
      {cnt=0;
      	cnt+=(((n/2)*m));
      	}
      	cout<<cnt<<endl;
    }
return 0;
}
