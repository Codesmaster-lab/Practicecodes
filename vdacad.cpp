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
    	int n;cin>>n;
       string s;cin>>s;
       if(s[0]=='2'&&s[1]=='0'&&s[2]=='2'&&s[3]=='0')
       	 cout<<"YES";
       	else  if(s[n-4]=='2'&&s[n-3]=='0'&&s[n-2]=='2'&&s[n-1]=='0')
       	 cout<<"YES";
       	else  if(s[0]=='2'&&s[1]=='0'&&s[n-2]=='2'&&s[n-1]=='0')
       	 cout<<"YES";
       	else  if(s[0]=='2'&&s[1]=='0'&&s[2]=='2'&&s[n-1]=='0')
       	 cout<<"YES";

       	else  if(s[0]=='2'&&s[n-3]=='0'&&s[n-2]=='2'&&s[n-1]=='0')
       	 cout<<"YES";
       	else 
       		cout<<"NO";
       	cout<<endl;
    }
return 0;
}
