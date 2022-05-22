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
     int cnt=0;
     map<int,int> mp;
     for(int j=0;j<n;j++)
     {
     	cin>>a[j];
           
        for(int i=0;i<j;i++)
        {
        	mp[a[i]*a[j]]++;
        } 
     }
     cout<<cnt<<endl;       
    }
return 0;
}
