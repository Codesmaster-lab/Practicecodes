#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)

 bool compare(pair<int,int> A,pair<int,int> B)
 {
 	return A.second>B.second;
 }
int main()
{
	IOS;
	ll n,t;cin>>n;
	t=n;
    vector<pair<int,int>> v;

    while(t--)
    {
     int p,r;
     cin>>p>>r;
     v.push_back(make_pair(p,r));     
    }

    sort(v.begin(), v.end(),compare);

    int q;cin>>q;
    while(q--)
    {
    	int x,y,c;
    	c=0;
    	cin>>x>>y;
    	for(auto i:v)
    	{
    		pair<int,int> p= i;
            if(p.first>=x && p.first<=y)
            {
            	cout<<p.second<<endl;
                c=1;
            	break;
            }
    	}  
    	if(!c)
    		cout<<-1<<endl;
    }
return 0;
}
