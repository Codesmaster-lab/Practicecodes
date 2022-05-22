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
      //cout<<s[0]<<endl;
      if(s[0]=='1')
      {
      	//cout<<"dscb";
       s.insert(1,"0"); 
       cout<<s<<endl;
      }
      else
       cout<<"1"<<s<<endl;       
    }
return 0;
}
