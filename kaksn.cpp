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
      float s=0;
      for (int i = 0; i < n; ++i)
             {
             	int a;cin>>a;
             	s+=a;
             }
         float d=(s/n);
         if(d==1.00)
          cout<<0;    
         else if(n+1>=s)
            cout<<1;
          else 
          	cout<<s-n;
          cout<<endl;

    }
return 0;
}
