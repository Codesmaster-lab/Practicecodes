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
     int a[n];
     int b[n];
     int mini=INT_MAX;
    map<int,int> mp;
     int ind=0;
     for (int i = 0; i < n; ++i)
            {
            	cin>>a[i];
            	mp[a[i]]++;
                b[i]=a[i];
            }
sort(a,a+n);
for (int i = 0; i < n; ++i)
{
	if(mp[a[i]]==1)
	{
		for (int j = 0; j < n; ++j)
		{
		   if(b[j]==a[i])
		   {
		   	ind=j+1;
		   	goto label;
		   }
		}
	}
}

label:
if(ind>0)
cout<<ind<<endl;
else
cout<<-1<<endl;
    }
return 0;
}
