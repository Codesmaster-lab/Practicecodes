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
         int a,b,c,d,k;
         cin>>a>>b>>c>>d>>k;
         int y=(abs(a-c)+abs(d-b));
         if(y==k)
         cout<<"YES";
         else if(y<k)
         {
         	int r=k-y;
         	 if(r%2==0)
         	 	cout<<"YES";
         	 else
         	 	cout<<"NO";
         }
         else
         cout<<"NO";
         cout<<endl;	

    }
return 0;
}
