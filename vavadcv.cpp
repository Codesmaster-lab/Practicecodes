#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int main()
{
	IOS;
	ll t;cin>>t;
    ll h=0;
    while(t--)
    {
           string s;cin>>s;
           int n=s.size();
           int maxi=INT_MIN;
           unordered_map<char,int> mp;
           for(int i=0;i<n;i++)
           {
               mp[s[i]]++;
              maxi=max(mp[s[i]],maxi);    
           } 

           for(auto i: s)
           {}
           int c=1;

           if(maxi>n/2)
           	c=0;
           else
           {
           	string u=s;
           	while(true)
           	next_permutation(s.begin(), s.end()); 
           }

           

    }
return 0;
}
