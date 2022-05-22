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
      int a[n];
      int sum=0;
      for (int i = 0; i < n; ++i)
             {
             	cin>>a[i];
             	sum+=a[i];
             }       
       if(sum%n!=0)
       {
       	cout<<-1<<endl;
       }
       else
       {
       	int k;k=sum/n;
       	if(n==1)
       		cout<<0<<endl;
       	else
       	{
       		int cnt=0;
       		 for (int i = 0; i < n; ++i)
             {
             	if(a[i]>k)
             		cnt++;
             }  
             cout<<cnt<<endl;
       	}
       }
    }
return 0;
}
