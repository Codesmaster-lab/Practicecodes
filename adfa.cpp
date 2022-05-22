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
      int cnt=0;
      for (int i = 0; i < n; ++i)
           {
           	int y;cin>>y;
           	if(y==1 || y==3)
           		cnt++;
           }
           cout<<cnt<<endl;     
    }
return 0;
}
