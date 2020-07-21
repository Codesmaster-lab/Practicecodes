#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
ll OR(std::vector<ll>:: iterator a,std::vector<ll>:: iterator b )
{
	ll ans=*a;
	for (std::vector<ll>:: iterator p =a+1;  p!=b ; ++p)
	{
		ans=ans|(*p);
	}
	return ans;
}
int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {
       int n;cin>>n;
        std::vector<ll> v;
        set<ll>s;
        std::vector<ll> :: iterator p;
       int c=1;
       for (int i = 0; i < n; ++i)
       {
       	ll a;cin>>a;
       	if(c==1)
       	{
       		v.push_back(a);
       	for (p=v.begin(); p!=v.end(); p++)
       		{
       			ll key=OR(p,v.end());
       			if(s.find(key)!=s.end())
       		       c=0;
       		    else
       		    	s.insert(key);
       		}	 
       	
        }

         
       }
       if(c)
       	cout<<"YES";
       else
       	cout<<"NO";
       cout<<endl;

    }
return 0;
}
