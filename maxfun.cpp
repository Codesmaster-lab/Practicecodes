#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
ll func(ll a ,ll b, ll c)
{
	if(a-b + c-a );
}
int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {
       ll n;cin>>n;
       ll A[100000];
       for (ll i = 0; i < n; ++i)
              {
              	cin>>A[i];
              }       
              sort(A,A+n);
       ll g=A[n-1]-A[0];
       /*ll max=0;
       for (ll i = 1; i < n-1; ++i)
              {
              	if(func(A[i],A[0],A[n-1])>max)
              		max=func;

              }
              */ 
              cout<<2*g<<endl;      
    }
return 0;
}
