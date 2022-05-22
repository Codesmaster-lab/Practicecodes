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
      int x,y;cin>>x>>y;
      int a,b;
      if(y<x)
      {
      	cout<<0<<" "<<0<<endl;
      	continue;
      }
      else if(y==x)
      {
      	cout<<1<<" "<<1<<endl;
      	continue;
      }  
      if(y%x==0)
      {
      	int c=0;
      int k=y/x;
      for(int i=2;i<=100 && i<=k;i++)
      {
      	if((double)(log(k)/log(i))-floor(log(k)/log(i))==0)
      	{
      		c=1;
      		cout<<(int)(log(k)/log(i))<<" "<<i<<endl;
      		break;
      	}
      }
      if(c==0)
      cout<<0<<" "<<0<<endl;
      }
      else
      {
      cout<<0<<" "<<0<<endl;
      	
      }	
    }
return 0;
}
