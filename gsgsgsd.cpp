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
      int a,b;cin>>a>>b;
     if(a!=b)
{
      ll p= 2*a*b;
       double tu=sqrt(p);
      if(tu-(int)tu==0)
      {
         cout<<(int)tu*(int)tu<<endl;
      } 
      else
      {
      	if((int)(tu+1)>=max(a,b))
      cout<<(int)(tu+1)*(int)(tu+1)<<endl;
      
      else 
      {
        cout<<(int)(tu+2)*(int)(tu+2)<<endl;
      }

     }}
      else
      {
      	cout<<4*a*b<<endl;
      }     
    }
return 0;
}
