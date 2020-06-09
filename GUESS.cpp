#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int main()
{
	IOS;
	ll n;cin>>n;
    ll key =1,c=0,p;char ans;
    while(ans!='E' && c==0)
    {
    	cout<<key<<endl;
    	cin>>ans;
    	if(ans=='L')
    		{c=1;}
    	key++;
    }
    ll beg=key,end=n+1;    
    while(ans!='E')
      {
       key=(end+beg)/2;
       cout<<key<<endl;cin>>ans;
       if(ans=='L')
       {
       	end=key;key=(end+beg)/2;
       	cout<<key<<endl;cin>>ans;
       }     
       else if(ans=='G')
       {
       	beg=key;
       	key=(end+beg)/2;
       	cout<<key<<endl;cin>>ans;
       }
      }

return 0;
}
