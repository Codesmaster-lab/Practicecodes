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
     ll n;cin>>n;
     ll cnt=0;
     for (int i = 1; i <= n; i++)
        {
        	for (int  j=i+1; j <=n; j++)
        	{cout<<(i&j)<<endl;
        		if((i&j) >0)
        			cnt++;
        	}
        }   
        if(cnt>0)
        cout<<cnt<<endl;
    else
    	cout<<-1<<endl;
    }
return 0;
}
