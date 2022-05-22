#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)

string LCMS(string a,string b)
{
	int n=a.size();
	int m=b.size();
	
	if(n>=m)
	{
        if(n%m==0)
        {}
    else
    	return "-1";
	}
    else
    {
         
        if(m%n==0)
        {}
    else
    	return "-1";
    }
}

int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {
     string a,b;
     cin>>a>>b;
     cout<<LCMS(a,b);       
    }
return 0;
}
