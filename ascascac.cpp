#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int main()
{
	IOS;
	int n;cin>>n;
    string s[n];
	
	for (int i = 0; i < n; ++i)
	{
	   cin>>s[i];
	}
  
    for (int i = 0; i < n; ++i)
	{
	   int cnt=0;
	   for (int j = 0; j < n; ++j)
	   {
	   	if(s[j][i]=='0')
	   		cnt++;
	   }
	   if(cnt>(n-cnt))
	   {
	   	for (int j = 0; j < n; ++j)
	    {
	   	if(s[j][i]=='0')
	   		s[i][j]='1';
	   	else
	   		s[i][j]='0';
	    }
	   }
	}
int c=0;
for (int i = 0; i < n; ++i)
	{
	  int  cnt=0;
	   for (int j = 0; j < n; ++j)
	   {
	   	
	   		cnt+=(int)s[i][j]-'0';
	   }
	   if(cnt==(n))
	   {
	   	c++;
	   }
	}
cout<<c<<endl;	
return 0;
}
