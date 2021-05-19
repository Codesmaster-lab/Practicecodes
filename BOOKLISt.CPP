#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int main()
{
	IOS;
	int m;cin>>m;
	std::vector<int> v;
	for (int i = 0; i < m; ++i)
	{
		int a;cin>>a;
		v.push_back(a);
	}
	int n;cin>>n;
	for (int i = 0; i < n; ++i)
	{
		int a;cin>>a;
		std::vector<int> :: iterator p=v.begin();
		cout<<*(p+a-1)<<endl;
		v.erase(v.begin()+a-1);
	}
return 0;
}
