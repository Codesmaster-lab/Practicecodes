#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)

bool isprime(int n)
{
	int i=n-2;
	while(i>1)
	{
		if(n%i==0)
			return false;
		cout<<i<<endl;
		i--;
	}
	return true;
}

int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {
      int n;cin>>n;
      if(n==1)
      cout<<0<<endl;
      else if(n==2)
      	cout<<1<<endl;
      else if(n==3)
      	cout<<2<<endl;
      else
      {
      if(n%2==0)
        cout<<2<<endl;
    else
      {
        cout<<3<<endl;
      }
    }

    }
return 0;
}
