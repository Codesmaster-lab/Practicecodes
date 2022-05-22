#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int main()
{
	IOS;
    ll cne=0;
    ll cno=0;
    ll inde,indo;
	ll t;cin>>t;
    for(ll i=0;i<t;i++)
    {
     ll a;  cin>>a;
     if(a%2==1)
        {cno+=1;
            if(cno==1)
                indo=i+1;
        }
    else {
        cne++;
            if(cne==1)
                inde=i+1;
    }
    }
    if(cne>cno)
        cout<<indo<<endl;
    else
        cout<<inde<<endl;
return 0;
}
