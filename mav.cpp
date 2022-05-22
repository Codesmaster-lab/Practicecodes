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
      int i=1;
       int x=1;
      while(i<=n)
      {
      	if(!(x%3==0 || x%10==3))
      	{	
      	i++;
         }
         x++; 
      }
      cout<<x-1<<endl;
    }
return 0;
}
