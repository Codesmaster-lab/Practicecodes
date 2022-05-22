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
       int a[n];
       int maxi=0;
       for(int i=0;i<n;i++)
       {
          cin>>a[i];
          maxi=max(maxi,a[i]);  
       }   

         int v=0;
       for(auto i:a)
       {
          v=max(v,maxi-i);
       }
       cout<<v<<endl;
    }
return 0;
}
