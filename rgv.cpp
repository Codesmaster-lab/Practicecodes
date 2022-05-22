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
       int n=s.size();
       map<char,int> mp;
       set<char> se;
       set<char> :: iterator it;
       
       for (int i = 0; i < n; ++i)
       {
       	se.insert(s[i]);
       	mp[s[i]]++;
       }
       //int m=se.size();
       int k=0;int cv=0;
       for (it = se.begin(); it != se.end(); it++)
       {
          char ch=*it;
          if(mp[ch]>=2)
            k++;
          else
            cv++;     	 
       }
      k+=(cv/2);
      cout<<k<<endl;
    }
return 0;
}
