#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)

bool is_prime(ll n)
{
	//double k=sqrt(n);
	//ll p=(ll)k +1;
	for(ll i=2;i*i<=n;i++)
	{
		if(n%i==0)
			{return false;break;}
	}
	return true;
}

int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {
    	ll n;cin>>n;
      int cnt=2;
      for (int i = 4; i < n; i++) {
      if(is_prime(i))
          cnt++;
    }
     cout<<cnt<<endl;
    }
return 0;
}
