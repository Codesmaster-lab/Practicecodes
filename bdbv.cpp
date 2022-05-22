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
      int h,w;cin>>h>>w;
      int a[h][w];
      for(int i=1;i<h-1;i++)
      {
      	for(int j=1;j<w-1;j++)
      	{
      		a[i][j]=0;
      	}
      }
    
    int c=1;
    for(int i=0;i<w;i++)
    {
    	a[0][i]=c;
    	c=(c+1)%2;
    }
    c=0;
    for(int i=1;i<h-1;i++)
    {
    	
    	a[i][0]=c;
    	a[i][w-1]=c;
    	c=(c+1)%2;
    }
   
  /* c=a[0][w-1];
    for(int i=1;i<h;i++)
    {
    	c=(c+1)%2;
    	a[i][w-1]=c;
    
    }
 */

   if(h%2)
   {c=0;
    for(int i=0;i<w;i++)
    {
    	c=(c+1)%2;
    	a[h-1][i]=c;    	
    }}
    else
    {
    	c=0;
    	for(int i=0;i<w;i++)
    {
    	
    	a[h-1][i]=c;    	
    }
    }
/*
if(a[h-1][w-1]==1)
{
if(a[h-2][w-1]==1)
	a[h-1][w-1]=0;
else if(a[h-2][w-2]==1)
	a[h-1][w-1]=0;
else if(a[h-1][w-2]==1)
    a[h-1][w-1]=0;	

}*/

     for(int i=0;i<h;i++)
      {
      	for(int j=0;j<w;j++)
      	{
      		cout<<a[i][j];
      	}
      	cout<<endl;
      }

}
return 0;
}
