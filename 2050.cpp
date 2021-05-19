#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lld long double
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {ll cnt=0;
      lld n;cin>>n;
      while(n>=2050)
      {
        
        

        //cout<<(float)(((float)n)/(float)2050);
       //cout<<log10(n/2050)<<endl;
       ll k=(ll)log10(n/2050);
       
       n-=(2050*(pow(10,k)));
       cnt++;

      }
     if(n<2050 && n>0)
     	cout<<-1;
     else
     	cout<<cnt;
     cout<<endl;

    }
return 0;
}
