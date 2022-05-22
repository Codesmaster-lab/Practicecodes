#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
ll gcd(ll a,ll b)
{
	if(a>=b)
	{
        if(b==0)
        return a;
       else 
       	return gcd(b,a%b);
	}
	else
		{return gcd(b,a);}
}


int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {
       ll n;cin>>n;
       
       ll te=n;
       ll r=0;
       while(te!=0)
       {
       	r+=te%10;
       	te=te/10;
       }
     //ll o=n-r;
       int i=0;
       while(i<3)
       	{ i++;
       		if(gcd(n,r)>1)
       			
       			break;

       	n+=1;
       	r+=1;
       	r=r%10;
       	}
       	cout<<n<<endl;
       		
       
    }
return 0;
}
