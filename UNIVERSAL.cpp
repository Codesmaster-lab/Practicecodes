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
       int n;cin>>n;
       int l=s.size();
       int j;
       for (int i = 0; i < n; ++i)
             {
             	int a;cin>>a;
             	int check=0;
             	for (j =a-1 ; j<l ; j++)
             	{
             	   if(check==0 && s[j]==')')
             	    check+=0;
             	   else if(check>0 && s[j]==')')
             	   {	check-=1;break;}
             	  else if(s[j]=='(')
             	  {
             	  	check+=1;
             	  }
             	}
             	if(check==0)
             	cout<<j+1<<endl;
             else
             	cout<<-1<<endl;

             }      
    }
return 0;
}
