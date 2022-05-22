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
       if(n<10)
        cout<<n<<endl;
       else
       {
        int c=9;
        ll ai=0;
         while(c--)
         {
         	ai+=c;
         	if(ai==n)
         	{
         		for (int i = c; i <=9; ++i)
         		{
         			cout<<i;
         		}
         		cout<<endl;
         		goto l;
         	}
         	else if(n-ai< c)
         	{
         		cout<<n-ai;
         		for (int i = c; i <=9; ++i)
         		{
         			cout<<i;
         		}
         		cout<<endl;
                goto l;
         	}
         	c--;
         }
         cout<<"-1"<<endl;
         l:
          {}
       } 
    }
return 0;
}
