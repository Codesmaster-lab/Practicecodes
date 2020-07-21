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
       ll sum=0;
       for (int i = 0; i < n; ++i)
       {int a;cin>>a;
       	sum+=a;
       }
       if(sum%n ==0)
       	cout<<"Yes";
       else
       	cout<<"No";
       cout<<endl;
    }
return 0;
}
