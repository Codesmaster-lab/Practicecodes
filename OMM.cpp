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
       int  n;cin>>n;
       int maxi=-1000;
       int mini=1000;
       for (int i = 0; i < n; ++i)
              {
              	int a;cin>>a;
              	mini = min(a,mini);
              	maxi = max(a,maxi);
              } 
       if(maxi-mini<=300)
        {
        	if(maxi-mini>maxi)
        		cout<<"NO";
           else if(mini>=0)

           {cout<<"YES"<<endl;
            cout<<maxi+1<<endl;
            for (int i = 0; i <= maxi; ++i)
                      {
                      	cout<<i<<" ";
                      }
           }
           else
           {
           	cout<<"YES"<<endl;
           	 cout<<maxi-mini+1<<endl;
            for (int i = mini; i <= maxi; ++i)
                      {
                      	cout<<i<<" ";
                      }
           }
                      cout<<endl;

        }   
        else
        {
        	cout<<"NO"<<endl;
        }          
    }
return 0;
}
