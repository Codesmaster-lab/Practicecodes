#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int main()
{
	IOS;
      ll n,r;cin>>n>>r;
      int A[n];
      ll c=r,mini=INT_MAX;
      for (int i = 0; i < n; ++i)
           {
           	cin>>A[i];
           	mini=min(mini,abs(A[i]-c));
           	c=A[i];
           }     
         cout<<mini<<endl;  
    
return 0;
}
