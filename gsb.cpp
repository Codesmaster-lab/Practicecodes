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
      unordered_map<int,int> mp;
      int A[n];
      int c=0;
      for(int i=0;i<n;i++)
      {
      	cin>>A[i];
      	mp[A[i]]++;
      }
      for(int i=1;i<=n;i++)
      {
      	if(mp[i]>=1)
      	{
      		c+=mp[i]*i;
      	}
      }
      cout<<c<<endl;       

     
    }
return 0;
}
