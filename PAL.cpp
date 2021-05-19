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
       int q,r;
       q=n/k;
       r=n%k;
       if(q>3)
       {}
       else
       {
       	for (int j = 0; j < q; ++j)
       	{
       	for (int i = 0; i < k; ++i)
       	{
       		cout<<('a'+j);
       	}
       }
       }     
    }
return 0;
}
