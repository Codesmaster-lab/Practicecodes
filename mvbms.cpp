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
       int r,b,d,c=1;
       cin>>r>>b>>d;
       label:
       if(r>=b)
       {
         int x=1;
         while(r>0)
         {
         	 r=r-b;
         	if(x-1 >d)
         		{c=0;break;}
         	else
         		x++;
         }

         if(c==0)
         	cout<<"NO"<<endl;

         else
         cout<<"YES"<<endl;          
       }
       else
       {
       	int temp=r;
       	r=b;
       	b=temp;
       	goto label;
       }
    }
return 0;
}
