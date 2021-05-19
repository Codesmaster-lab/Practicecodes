#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int main()
{
	IOS;
	ll l,t;cin>>t;
	l=t;
    while(t--)
    {
     int n;cin>>n;
     string s;cin>>s;
     cout<<"Case #"<<l-t<<": "<<1<<" ";
     int cnt=1;
     for (int i = 1; i < n; ++i)
       {
       	if((int)s[i]>(int)s[i-1])
       	{
       		cnt+=1;
       		cout<<cnt<<" ";
       	}
       	else
       	{
       		cnt=1;
       		cout<<cnt<<" ";
       	}

       }
      cout<<endl;   
    }
return 0;
}
