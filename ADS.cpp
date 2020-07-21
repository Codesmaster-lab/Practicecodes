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
       ll s,n;
       cin>>s>>n;
       ll q=s/n,r=s%n;
       if(r>1)
       {
       	if(r%2==1)
        	cout<<2+q<<endl;
        else
        	cout<<q+1<<endl;
       }
       else if(r==0)
       	    cout<<q<<endl;
       	else
       		cout<<q+1<<endl;
    }
return 0;
}
