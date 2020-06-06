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
       	string s;
 	cin>>s;
 	int i=0,l;
 	l=s.size();
 	ll si=0;
 	while(s[i]!='\0')
 	{
 		if(!(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'))
 			{si+=pow(2,(l-i-1));}
 		
 		i++;
 	}
   cout<<si%1000000007<<endl;       
    }
return 0;
}
