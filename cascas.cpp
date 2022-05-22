#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)

bool check(int B[],int a,int b,int n)
{
	for(int i=0;i<n-1;i++)
	{
		if(B[i]==a ){
			if( B[i+1]==b)
			return true;
            else
            return false;} 

	}
	return false;
}


int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {
        int n,ke;
        cin>>n>>ke;
        int A[n],b[n];
        for(int i=0;i<n;i++)
        {
          cin>>A[i];
          b[i]=A[i];
        }   
        if(ke>n)
        	{cout<<"Yes"<<endl;continue;}
        sort(b,b+n);
        int k=0;
        int i;
        for(i=1;i<n ;i++)
        {
          if(A[i]<A[i-1])
          {
          	k++;
          } 
          else if(A[i]>A[i-1])
          {
          	if(A[i]-A[i-1] !=1)
          	{
          		if(!check(b,A[i-1],A[i],n))
                 {
                 	k++;
                 }
          	} 
          }

        }
       k++;
        if(k>ke)
        {
        	cout<<"No"<<endl;
        }   
        else
        {
           cout<<"Yes"<<endl;
        }
    }
return 0;
}
