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
      if(n%2==1)
      {
      for (int i = 1; i < n-2; i+=2)
      {
       cout<<(i+1)<<" "<<i<<" ";
      }
      cout<<n<<" "<<n-2<<" "<<n-1<<" ";
       }
      else
      {
       for (int i = 1; i <= n; i+=2)
      {
        
          cout<<(i+1)<<" "<<i<<" ";
      } 
      }
      cout<<endl;
    }
return 0;
}
