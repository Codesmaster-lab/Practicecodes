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
       int n;cin>>n;
       std::vector<int> v;
       for(int i=0;i<n;i++)
       {
       	int a;
       	cin>>a;v.push_back(a);
       }       

       sort(v.begin(), v.end());

       unordered_map<int,int> mp;

       vector<int> b,c;  
       for(auto i:v)
       {
       	if(mp[i]==0)
       		b.push_back(i);
        else
        	c.push_back(i);
          mp[i]++;
       }

       n=b.size();
       b.insert(b.begin()+n,c.begin(),c.end());

       for(auto i:b)
       	cout<<i<<" ";
       cout<<endl;
    }
return 0;
}
