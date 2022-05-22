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
       int k;
         k=log2(n);
         k=pow(2,k)-1;
         cout<<k<<endl;     
    }
return 0;
}

