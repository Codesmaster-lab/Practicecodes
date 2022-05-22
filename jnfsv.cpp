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
       int n,k;
       cin>>n>>k;
       int a[n];
       for (int i = 0; i < n; ++i)
              {
              	cin>>a[i];
              }
int c;
       while(k--)
       {c=-1;
       	for (int i = 0; i < n-1; ++i)
       	{//cout<<a[i]<<a[i+1]<<endl;
       		if(a[i]<a[i+1])
       		{
       			//stops
       			c=i+1;
       			a[i]+=1;
       			break;
       		}
       	}
       	//cout<<c<<endl;
       }
       cout<<c<<endl;
                  
    }
return 0;
}
