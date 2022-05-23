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
      string s;cin>>s;
      int cnt=0;
      if(n%2==1)
      {
      	 cnt=1;
           int i=(n/2)-1;
           while(s[i]==s[n/2] && i>=0)
           {
           	i--;
           	cnt+=2;
           }
      }
      else
      {           
          int i=(n/2)+1;
          int k=1;
          while(s[i]==s[n/2] && i<n)
          {
               i++;
               k++;
          }
         cnt=2*k;
      }
      cout<<cnt<<endl; 
    }
return 0;
}
