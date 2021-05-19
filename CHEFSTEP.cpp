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
      int n,k;cin>>n>>k;
      
      for (int i = 0; i < n; ++i)
              {
              	ll A;
              	cin>>A;
              	if(A%k==0)
              		cout<<1;
              	else
              		cout<<0;
              }        
             cout<<endl; 
    }
return 0;
}
