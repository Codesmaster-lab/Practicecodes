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
        if(n<3)
        {
        	if(n==1)
        		cout<<1<<endl;
        	else
        	   cout<<2<<endl; 
        }  
        else
        {
           int k=n/3;
           int r=n%3;
           
           string f;

           if(r!=1)
           f="";
           else
           f="1";

           while(k--)
           {
           	f+="21";
           }
           
           if(r==2)
           {
           	
           	f+="2";
           }
           cout<<f<<endl;

        }       
    }
return 0;
}
