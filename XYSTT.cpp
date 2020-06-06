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
        ll n,p=0;
        string s;cin>>s;
        n=s.size();
        for (int i = 0; i <  n; ++i)
               {
               	if((s[i]=='x'&& s[i+1]=='y')||(s[i]=='y'&& s[i+1]=='x'))
               	{
               		p++;
               		i=i+1;
               	}
               }       
               cout<<p<<endl;
    }
return 0;
}
