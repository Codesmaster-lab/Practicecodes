#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int main()
{
	IOS;
	int n,q;cin>>n>>q;
	string s;cin>>s;
	while(q--)
    {
    	int l,r;cin>>l>>r;
    	map<char,int> mp;
    	set<char>v;
    	for (int i = l-1; i < r; ++i)
    	{
    		mp[s[i]]++;
    		v.insert(s[i]);
    	}
    	int cnt=0;
    	set<char> :: iterator itr;
    	for (itr=v.begin(); itr!=v.end(); itr++)
    	{
    	   char c=*itr;
    	   cnt+=((int)c-'a'+1)*mp[c];
    	}
       cout<<cnt<<endl;
    } 

return 0;
}
