#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
char maz(char a,char b,char c)
{
	int A=(int )a -'0',B=(int )b -'0',C=(int )c -'0';
	if(A+B+C<1)
		return '0';
	else
		return '1';

}
int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {int n;cin>>n;
       string s;cin>>s;
       for (int i = 0; i < s.size() && s.size()>1; ++i)
              {
              	if(s[i]==s[i+1]&& s[i+1]==s[i+2])
              	{
                  continue;
              	}
              	else
              	{
              	   cout<<s<<endl;	
                   char l= maz(s[i],s[i+1],s[i+2]);
                   s[i]=l;
                   cout<<*(s.begin()+i)<<endl;
                   s.erase(s.begin()+i);
                   s.erase(s.begin()+i+1);
              	}
              	
              }
              cout<<s<<endl;
              if(s.size()==1)
              cout<<"YES";
              else
              cout<<"NO";       
    }
return 0;
}