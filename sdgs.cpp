#include<bits/stdc++.h>
#define ll long long 
using namespace std;
 int main()
{
	ll a,b,k;
	cin>>a>>b;
    k=b-1;
    cout<<"YES"<<endl;  
	for(ll i=a;i<=k;i+=2)
	{
      cout<<i<<" "<<i+1<<endl;
	}
return 0;
}
      