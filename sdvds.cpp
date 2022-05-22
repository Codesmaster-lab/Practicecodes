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
     int cnt=-1;
     int ind1,indn;
     for (int i = 0; i < n; ++i)
       {
       	cin>>a[i];
       	if(a[i]!=i+1)
          cnt=0;
       	if(a[i]==1)
       		ind1=i;
       	else if(a[i]==n)
       		indn=i;
       }
    

    if(cnt!=0)
    {//cout<<"here";
    	cnt=0;
    	goto label;
    }
    else 
    {
 
      if((ind1==0 && indn==n-1)||(ind1==0 && indn!=n-1)||(ind1!=0 && indn==n-1))
      	 cnt=1;
     else if((ind1!=0 && indn!=n-1))
          {
          	if(ind1==n-1 && indn==0)
          	{
               cnt=3;
          	}
          	else if(indn==0)
          	{
          		cnt=2;
          	}
          	else if(ind1==n-1)
          	{
               cnt=2;
          	}
            else 
            {
            	cnt=2;
            } 
          }
     
    }


label:
 cout<<cnt<<endl;
    }
return 0;
}
