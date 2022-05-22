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
      int a=(n>111? n/111 : 0);
      int b=((n-(a*111))>11? (n-(a*111))/11: 0);
      if((a*111) + (b*11) ==n)
      cout<<"YES";
      else
      cout<<"NO";
      cout<<endl;       
    }
return 0;
}
