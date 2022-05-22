#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)

int prefix(int a[],int n,int x,ll sum)
{
	int i=0;
	while(i<n)
	{
		if(sum%x!=0)
		{
			return i+1;
			break;
		}
          sum-=a[i];
          i++;
	}
	return -1;

}


int suffix(int a[],int n,int x,ll sum)
{
	int i=n-1;
	while(i>=0)
	{
		if(sum%x!=0)
		{
			return i+1;
			break;
		}
          sum-=a[i];
          i--;
	}
	return -1;

}

int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {
      int n,x;cin>>n>>x;
      int a[n];
      ll sum=0;
      int c=0;
      for (int i = 0; i < n; ++i)
                   {
                   	/* code */
                   	cin>>a[i];
                   	if(a[i]%x!=0)
                   	{
                   		c=1;
                   	}
                   	sum+=a[i];
                   }

        if(c==0)
        	cout<<-1<<endl;
        else if(sum%x!=0)
       cout<<n<<endl; 
             else
             {int l=-1,r=0;
             	for (int i = 0; i < n; ++i)
             	{
             	   if(a[i]%x!=0 && l==-1)
             	   {
             	   	l=i;
             	   	r=i;
             	   }
             	   else if(l!=-1&&a[i]%x!=0 )
             	   {
                     r=i;
             	   }
             	}
             	//cout<<l<<r;
             	cout<<n-min(l+1,n-r)<<endl;
             }                   
    }
return 0;
}



/*
1 2 3
0 1 3 6

6
0  1



*/