#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int main()
{
	IOS;
	ll n;int l;cin>>n>>l;
	std::vector<int> v;
	int a;
	for(ll i=0;i<n;i++)
	{
		cin>>a;
		v.push_back(a);
	}
	v.push_back(l);
	sort(v.begin(), v.end());
    double mini=max(v[0],l-v[n-1]);
    int maxi=INT_MIN;
    for(ll i=1;i<n;i++)
	{
		maxi=max(v[i]-v[i-1],maxi);
	}
	double df=maxi/(2.0);
	//cout<<df<<endl<<mini<<endl;
	if((double)mini>df)
	cout<<mini<<endl;
    else
    	cout<<setprecision(9)<<fixed<<df<<endl;
return 0;
}
