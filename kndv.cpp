#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)

bool isnot(int a)
{
	double t=sqrt(a);
	int y=floor(t);
	if(a-(y*y) == 0)
		return false;
	else
		return true;
}

int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {
      int n;cin>>n;
      int c=0;
      for(int i=0;i<n;i++ )
      {
      	int a;cin>>a;
      	if(isnot(a)&&c==0)
      	{
      		c=1;
      	}
      }
      if(c)
      cout<<"YES";
      else
      cout<<"NO";
      cout<<endl;      
     }
return 0;
}
