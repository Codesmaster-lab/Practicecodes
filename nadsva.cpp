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
     int r=INT_MIN;
     while(n!=0)
     {
     	r=max(n%10,r);
     	n=n/10;
     }       
     cout<<r<<endl;
    }
return 0;
}
