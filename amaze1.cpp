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
      for(int i=2;i<n;i++)
      {
      	int b=n/i;
      	if(b%2==0)
      	{
           cout<<i<<" "<<2*i<<endl;break;
      	}
      } 
    }
return 0;
}
