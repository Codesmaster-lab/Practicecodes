#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)

pair<int,int> goaccd(char s, vector<vector<bool>> &v,int r,int c,int sr,int sc)
{
	if(s=='N')
	{
       while(sr>=1 && v[sr-1][sc-1]==true)
       {
       	sr--;
       }
       v[sr-1][sc-1]=true;
       return make_pair(sr,sc);
	}
	else if(s=='S')
	{
		while(sr>=1 && v[sr-1][sc-1]==true)
       {
       	sr++;
       }
       v[sr-1][sc-1]=true;
       return make_pair(sr,sc);
	}
	else if(s=='E')
	{
		while(sr>=1 && v[sr-1][sc-1]==true)
       {
       	sc++;
       }
       v[sr-1][sc-1]=true;
       return make_pair(sr,sc);
	}
	else
	{
		while(sr>=1 && v[sr-1][sc-1]==true)
       {
       	sc--;
       }
       v[sr-1][sc-1]=true;
       return make_pair(sr,sc);
	}
}

int main()
{
	IOS;
	ll t;cin>>t;
    ll y=0;
    while(t--)
    {
        int n,r,c,sr,sc;
        cin>>n>>r>>c>>sr>>sc;
        string s;cin>>s;
        vector<vector<bool>> v (r,vector<bool>(c,false));
        v[sr-1][sc-1]=true;
        for(int i=0;i<n;i++)
        {
        	pair<int,int> p=goaccd(s[i],v,r,c,sr,sc);
        	sr=p.first;
        	sc=p.second;
        } 
        cout<<"Case #"<<y<<": "<<sr<<" "<<sc<<endl;
        y++;
    }
return 0;
}
