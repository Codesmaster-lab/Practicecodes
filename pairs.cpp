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
      int n,l,r;
      cin>>n>>l>>r;
      std::vector<int> v;
      int a[n];
      for (int i = 0; i < n; ++i)
             {
             	cin>>a[i];
             	v.push_back(a[i]);
             }       
      sort(v.begin(),v.end());
             

    }
return 0;
}
