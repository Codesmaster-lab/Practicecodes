#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int main()
{
	IOS;
	ll t;cin>>t;
	ll y=1;
    while(t--)
    {
      int n;cin>>n;
      vector<int> v;
      for(int i=0;i<n;i++)
      {
      	int c;cin>>c;
      	v.push_back(c);
      } 
      priority_queue<int,vector<int>> pq;
      unordered_map<int,int> mp;      
      pq.push(v[0]); 
      mp[v[0]]++;
      int cnt=0;
      if(n>1 && v[0]>v[1])
      	cnt++;
      for(int i=1;i<n;i++)
      {
         pq.push(v[i]);
         mp[v[i]]++;
         if(mp[v[i]]==1)
         {
         	if(pq.top()==v[i] && i<n-1 && v[i]>v[i+1])
         		cnt++;
         	else if(i==n-1 && pq.top()==v[i])
                cnt++;          	
         }
      }
      cout<<"Case #"<<y<<": "<<cnt<<endl;
      y++;
    }
return 0;
}
