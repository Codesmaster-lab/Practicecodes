#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)

bool find(ll n,ll a,ll b)
{
//cout<<n<<endl;
	if(n==1)
		return true;
	else if(n<1)
		return false;
	else
	{
		if(n%a==0 && a!=1)
		{
			if(find(n/a,a,b))
				return true;
		}
		else if(find(n-b,a,b))
			return true;
        
        else
        	return false;
	}
}

int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {
       ll n,a,b;
       cin>>n>>a>>b;
       if(find(n,a,b))
       	cout<<"Yes";
       else
         cout<<"No";
     cout<<endl;
    }
return 0;
}
