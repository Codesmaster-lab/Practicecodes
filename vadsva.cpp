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
      if(n==1)
       cout<<2<<endl;
       else if(n%2==1)
       {
       	
           for(int i=0;i<n;i++)
           {
           	for(int j=0;j<n;j++)
           	{
           		if(i==n-1 && j==0)
           		  cout<<1<<" ";	
           		else if(i==j  || j==i+1)
                {
                	cout<<1<<" ";
                }
                 else
           		cout<<0<<" ";
           	}
           	cout<<endl;
           }
       }
       else
       {

           for(int i=0;i<n;i++)
           {
           	for(int j=0;j<n;j++)
           	{
           		if(i==n-1 && j==0)
           		  cout<<1<<" ";	
           		else if(i==j  || j==i+1)
                {
                	cout<<1<<" ";
                }
                 else
           		cout<<0<<" ";
           	}
           	cout<<endl;
           }
       }       
    }
return 0;
}
