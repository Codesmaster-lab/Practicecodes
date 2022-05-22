#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)

bool check (ll n)
{
	if(n==1)
		return false;
	else if(n%2==0)
	{
		return check(n/2);
	}
	else
	{return true;
	}
}


int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {
     ll n;cin>>n;
     if(check(n))
     cout<<"YES"<<endl;
     else
     cout<<"NO"<<endl;       
    }
return 0;
}
