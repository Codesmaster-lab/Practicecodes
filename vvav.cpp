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
      unordered_map<char,int> mp;
      unordered_set<char> se;
      for(auto i: s)
      {mp[s[i]]++;se.insert(i);}
      cout<<mp.size()<<endl;    
      for(auto i: se)
      cout<<i<<" ";cout<<endl;   
    }
return 0;
}
