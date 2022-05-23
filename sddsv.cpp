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
       int n,m;
       cin>>n;
       int A[n];
       for(int i=0;i<n;i++)
       {
       	cin>>A[i];
       }       
       cin>>m;
       int B[m];
       int k=0;
       for(int i=0;i<m;i++)
       {
       	cin>>B[i];
       	k=(k+B[i])%n;
       }  
       cout<<A[k]<<endl;
    }
return 0;
}
