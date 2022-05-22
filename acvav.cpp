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
    	int n,x;cin>>n>>x;
    	int s[n];
       for (int i = 0; i < n; ++i)
       {
       	cin>>s[i];
       }
       map<int,int> mp;
       set<int> se;
       set<int> :: iterator it;
       
       for (int i = 0; i < n; ++i)
       {
       	se.insert(s[i]);
       	mp[s[i]]++;
       }
       //int m=se.size();
       int k=0;int cv=0;
       for (it = se.begin(); it != se.end(); it++)
       {
          int ch=*it;
          if(mp[ch]>=x)
            k++;
          else
            cv+=mp[ch];     	 
       }
      k+=(cv/x);
      cout<<k<<endl;
    }
return 0;
}
