#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int main()
{
	IOS;
	ll t;cin>>t;
	set<int> s;
    while(t--)
    {
        int a;cin>>a;
        s.insert(a);

    }
   int l=s.sizen();
    ncout<<l-1<<endl;
return 0;
}
