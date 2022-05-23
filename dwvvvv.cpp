#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int main()
{
	IOS;
	string s,x;
	cin>>s;
	cin>>x;
	int n=s.size();
	int u;cin>>u;
	unordered_map<char,int> mp;
	for(int i=0;i<26;i++)
	{
		
		if(x[i]=='1')
	     	mp[(char)(97+i)]=1;
	    else
    		mp[(char)(97+i)]=0;
	}

int cnt=0;
set<string> V;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
           string z="";
			for(int k=i;k<=j;k++)
			{
               z+=(s[k]);
			}
			V.insert(z);
		}
	}

  	for(auto i: V)
	{
		//cout<<i<<endl;
		int l=i.size();
		//cout<<l<<endl;
		int good=0,bad=0;
		for(int j=0;j<l;j++)
		{
			//cout<<i[j]<<mp[i[j]];
			if(mp[i[j]]==1)
				good++;
			else
				bad++;
		}

		//cout<<good<<" "<<bad<<endl;
		if(bad<=u)
			{cnt++;
			}
	}
	cout<<cnt<<endl;
return 0;
}
