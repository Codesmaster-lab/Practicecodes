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
      int x=0;
      x=x+(25*((int)s[0]-(int)'a'));

      if(s[1]>s[0])
      {
         x+=((int)s[1]-(int)'a');
      }
      else
      {
         x+=((int)s[1]-(int)'a')+1;
      
        	
      } 
    cout<<x<<endl;
    }
return 0;
}
