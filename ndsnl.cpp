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
    int cnt=0;
    for (int i = 0; i < n; ++i)
           {
           	 int l,r;cin>>l>>r;
           	 if(r>=k)
           	 {
           	 	if(l<=k)
           	 		cnt=max(cnt,(r-k)+1);
           	 }
       	 
 cout<<cnt<<endl;
           }       
    }
return 0;
}
