#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)

int sub(string t,int l,int n,string s,string w )
{
	if(s!="" && l <= n)
	{
        if(t!="")
        	{
        		//cout<<t<<endl;
        		if(t==w)
        			{
        				//cout<<"YES";
        		return 1;}
        	}
       return (sub(t,l+1,n,s,w)||
        //t+=s[l];  
        //s.erase(l,1);
        sub(t+s[l],l+1,n,s,w));
	}
	else
		return 0 ;
}

int main()
{
	IOS;
	ll t;cin>>t;
	while(t--)
	{
	string s,w;cin>>s>>w;
	if(s.size()<w.size())
		(sub("",0,w.size(),w,s)?cout<<"YES":cout<<"NO");
	else
		(sub("",0,s.size(),s,w)?cout<<"YES":cout<<"NO");

	cout<<endl;
	}
return 0;
}


