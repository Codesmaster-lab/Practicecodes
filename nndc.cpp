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
      string s;cin>>s;
       int n=s.size();
       int cnt=0;
       int maxi=INT_MIN;
       for (int i = 0; i < n; ++i)
              {
              	if(s[i]=='1')
              	{
              		cnt++;
              	}
              	else
              		cnt=0;
              
              		maxi=max(maxi,cnt);
              	
              }
            int maxo=INT_MIN;  
cnt=0;
              for (int i = 0; i < n; ++i)
              {
              	if(s[i]=='0')
              	{
              		cnt++;
              		//cout<<cnt<<endl;
              	}
              	else
              		cnt=0;
              	maxo=max(maxo,cnt);
              }
                cout<<maxi<<" "<<maxo
;    }
return 0;
}
