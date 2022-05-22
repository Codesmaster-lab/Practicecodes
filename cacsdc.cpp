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
      int a,b,d;
      cin>>a>>b>>d;
      int g;
      
      if(a<b)
      {
      	g=a;
      	a=b;b=g;
      }

      int q=a/b;
      int r=a%b;
      
      if(r)
      {
      	if(q<=d)
      		cout<<"YES";
      	else
      		cout<<"NO";
      }
      else
      {
        
      	if(q-1<=d)
      		cout<<"YES";
      	else
      		cout<<"NO";
      }
      
       cout<<endl;
    }
return 0;
}


