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
     ll s=0;
     int c=1;
     int A[1000];
     for (int i = 0; i < n; ++i)
            {
            	int a;cin>>a;
            	if(a+s >=i ) 
            		{s=s+a-i;}
            	else
            		{c=0;}

            }  
     if(c)
      cout<<"YES"<<endl;
      else
      cout<<"NO"<<endl;            
    }
return 0;
}
