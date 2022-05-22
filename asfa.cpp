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
      string s;cin>>s;
      ll n=s.size();
      ll c=0;
      ll cnt=0;
      ll i=0,p=0;
      while( i<n)
      {
      	if(s[i]=='(')
      		{c+=1;
      			cnt++;}
      	else if(s[i]==')')
          {if(c>0)
          	{c-=1;}
          }
     i++;
      }
      cnt-=c;
      i=0;
      c=0;
      while( i<n)
      {
      	if(s[i]=='[')
      		{c+=1;
      			cnt++;}
      	else if(s[i]==']')
          {if(c>0)
          	{c-=1;}
          }
     i++;
      }
      cnt-=c;
cout<<cnt<<endl;    }

return 0;
}
