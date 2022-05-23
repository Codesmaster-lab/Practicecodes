#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)

void primesieve(vector<ll> &v, ll n)
{
	 int visited[n];
	 for (int i = 0; i < n; ++i)
	 {
	 	visited[i]=1;
	 }
      ll d=sqrt(n);
    visited[0]=0;
    // cout<<x<<endl;
     for(int i=2;i<=d;i++)
     { 
         if(visited[i-1]!=0)
          for(int j=(2*i);j<n;j+=i)
          {
          	visited[j-1]=0;
          }
         else
         visited[i-1]=1; 
        
     }

     for (int i = 1; i <= n; ++i)
     {
     	
        if(visited[i-1]==1)
        	v.push_back(i);
     }

}

int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {
      ll m,n;
      cin>>m>>n;
      vector<ll> prime;
      primesieve(prime,n);
      for(auto i: prime)
       {
       	if(i>=m)
       		cout<<i<<endl;
       } 
     
    }
return 0;
}
