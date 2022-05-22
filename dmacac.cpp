#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)

bool isprime(int k)
{
	if(k==2)
		return true;
	else if(k%2==0)
		return false;
	else
	{
		for (int i = 3; i <k; ++i)
		{
			if(k%i==0)
				return false;
		}
		return true;
	}
}


int gcd(int a,int b)
{	
if(a>=b)
	return ((a%b)==0?(b):(gcd(a%b,b)));
else
	return ((b%a)==0?(a):(gcd(b%a,a)));

}

int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {
       int k;cin>>k;
       int w=100-k;
       
      /* if(k==2 || k==98)
       	cout<<50<<endl;

       else if(isprime(w) || isprime(k))
            cout<<100<<endl;
        else 
          {*/
          	int y=__gcd(w,k);
          	cout<<(w/y)+(k/y)<<endl;
          //}

    }
return 0;
}



