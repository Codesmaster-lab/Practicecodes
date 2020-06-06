#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL)

int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {int d=1;
      ll n;cin>>n;
      ll a=0,b=0,c=0;
     int s;
     cin>>s;
     if(s!=5)
     	d=0;
     else
     	a++;

    for (int i = 1; i < n; ++i)
    {
    	cin>>s;
    	if(d==1)
    	{
    	if(s==5)
    	{
    		a=a+1;
    	}
    	else if(s==10)
    	{
    		if(a>=1)
    		{
    			a=a-1;
    			b=b+1;
    		}
    		else
    			d=0;
    	}
        else
        {
        	if(a>=2)
        	{
              a=a-2;
              c=c+1;
        	}
        	else
        	{
        		if(b>=1)
        		{
        			b=b-1;
        			c=c+1;
        		}
        		else
        		{
        			d=0;
        		}
        	}	
        }
       }
    }
       


             if(d==1)
                    cout<<"YES"<<endl;
                    else
                    cout<<"NO"<<endl;      
    }
return 0;
}
