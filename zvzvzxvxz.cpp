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
      vector<int> A;
      for(int i=0;i<n;i++)
      {
      	int s;
      	cin>>s;
      	A.push_back(s);
      }
      for(auto i: A)
      cout<<i<<" ";       
    }
return 0;
}
