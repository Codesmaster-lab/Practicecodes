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
     string s,b;cin>>s;
     b=s;
     int k=0;
     sort(s.begin(),s.end());
     for (int i = 0; i < n; ++i)
            {
            	if(s[i]!=b[i])
            		k++;
            }       
            cout<<k<<endl;
    }
return 0;
}
