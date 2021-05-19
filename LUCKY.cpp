#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int check(ll t)
{int r,c=1;
    while(t!=0 && c==1)
    {r=t%10;//cout<<r<<endl;
    	if(r==7 || r==4)
            {c=1;}
        else 
        	c=0;
      t=t/10;}
      return c;
  }      
int main()
{
	IOS;
	ll t,c=0;cin>>t;
	//cout<<check(t)<<endl;
    for (int i = 4; i <= t; ++i)
    {//cout<<i<<endl;
    	if(t%i==0)
    		{if(check(i)==1)
    			{c=1;break;}}

    }
      if(c)
      	cout<<"YES";
      else
      	cout<<"NO";
return 0;
}
