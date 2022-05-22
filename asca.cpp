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
      if(n==2)
      cout<<-1<<endl;
      else
      {
      	for (int i = 0; i < n; ++i)
      	{
      		for (int j = 0; j < n; ++j)
      		{
      			cout<<(i+j+2)%((n*n))+1<<" ";
      		}
      		cout<<endl;
      	}
      }       
    }
return 0;
}
