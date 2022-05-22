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
        string s=to_string(n);
        int l=s.size();
        if(l>2)
        {
        	sort(s.begin(),s.end());
        	cout<<s[0]<<endl;
        }     
        else
        {
        	cout<<s[1]<<endl;
        }
    }
return 0;
}
