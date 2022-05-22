#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int main()
{
	IOS;
	string s;cin>>s;
   int n=s.size();
   string t="";
	for(int i=0;i<n;i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='y'||s[i]=='Y')
		{

		}
	  else
	  {
         if(isupper(s[i])==1)
         {
               t+=".";
               t+=tolower(s[i]);
         }
         else
         {
               t+=".";
               t+=(s[i]);
         	
         }

	  }
	}
	cout<<t<<endl;
return 0;
}
