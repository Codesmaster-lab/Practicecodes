#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int main()
{
	IOS;
	int n,q;cin>>n>>q;
	int a[n];
	int b[q];
	int c[50];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	for (int i = 0; i < q; ++i)
	{
		cin>>b[i];
	}
   for (int i = 0; i < 51; ++i)
   {
   	c[i]=0;
   }
   
   for (int i = 0; i < n; ++i)
   {
   	if(c[a[i]]==0)
        c[a[i]]=i+1;
   }
   
   for (int i = 0; i < q; ++i)
    {
    	cout<<c[b[i]]<<" ";
    	for (int j = 0; j < 51; ++j)
    	{
    		if(c[j]!=0 && c[j]<c[b[i]])
    		{
    			c[j]++;
    		}
    	}
    	c[b[i]]=1;
    } 
return 0;
}
