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
        int n,w,wr;
        cin>>n>>w>>wr;
        int a[n];
        int sum=0;
        for (int i = 0; i < n; ++i)
        {
        	cin>>a[i];
        	sum+=a[i];
        }
sort(a,a+n);
        if(w<=wr)
          {cout<<"YES"<<endl;goto label;}
       
        else
        {
          if(sum<(w-wr))
          {
          	cout<<"NO"<<endl;goto label;
          }
        
          else   // if(sum>=w-wr)
          {
             
             int leftSum = 0 ;
 
    // traverse array element
    for (int i = 0; i < n; i++)
    {
        // add current element to left Sum
        leftSum += a[i] ;
 
        // find sum of rest array elements (rightSum)
        int rightSum = 0 ;
        for (int j = i+1 ; j < n ; j++ )
            rightSum += a[j] ;
 
        // split point index
        if (leftSum == rightSum)
            {cout<<"YES"<<endl;
        goto label;}
    }
      



          	for (int k = 0; k < n-1; ++k)
          	{
       
            if(sum-a[n-k-1] <(w-wr))
            	{cout<<"NO"<<endl;goto label;}
            else
            {
          	int left=0;

             for (int i = 0; i < n-k; ++i)
             {
             	left+=a[i];
             	int right=0;
             	for (int j = 0; j < n; ++j)
             	{
             		right+=a[i];
             	}
             	if(left==right)
             		{cout<<"YES"<<endl;goto label;}
             }

             }


             }
             cout<<"NO"<<endl;
          }
        

          
        }  
        label: 
        {}    
    }
return 0;
}
