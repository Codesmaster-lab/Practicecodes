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
      int k;cin>>k;
      char c[8][8];
      
      for (int i = 0; i < 8; ++i)
      {
      	for (int j = 0; j < 8; ++j)
      	{
      		if(k>0)
      		{
              if(i==0 && j==0)cout<<"O";
              else cout<<".";
              k--;
      		}
      		else
      			cout<<"X";
      		
      	}
      	cout<<endl;
      }
      cout<<endl;
    }
return 0;
}
