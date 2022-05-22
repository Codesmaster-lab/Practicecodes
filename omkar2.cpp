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
        int a;
          vector<int> v;
        for (int i = 0; i < n; ++i)
        {
        	cin>>a;
        	v.push_back(a);
        }
       sort(v.begin(), v.end());
       for (int i = 0; i < n-1; ++i)
       {
       	for (int j = i+1; i < n; ++i)
       	{
       		mini=min(mini,(v[j]-v[i]));
       	}
       }
    }
return 0;
}
