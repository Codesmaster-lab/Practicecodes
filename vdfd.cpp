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
        int a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;

       int l=a+c-x;

       if(l<0)
       {
             cout<<"NO";
       }
       else
       {
       	if(l>c)
       	{
             if(b+c-y>=0)
            {
            	cout<<"YES";
            }
        else
        {
            cout<<"NO";
        }
       	}
       	else
       	{
            if(b+l-y>=0)
            {
            	cout<<"YES";
            }
        else
        {
            cout<<"NO";
        }
       	}
       }
       cout<<endl;

    }
return 0;
}
