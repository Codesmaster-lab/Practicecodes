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
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++)
        {
           cin>>A[i];
        }         
        if (A[n-1]<n-1)
        {
        	cout<<-1<<endl;
        }
        else
        {
        	int maxi=A[n-1];
        	int c=1;
        	int cnt=0;
        	for(int i=n-2;i>=0;i--)
        	{
        		while(A[i]>=maxi)
        		{
        			A[i]=A[i]/2;
        			cnt++;
        		}
        		maxi=A[i];
        		if(maxi<i)
        			{c=0;break;}
        	}
         if(c==0)
         cout<<-1<<endl;
         else
         {
           cout<<cnt<<endl;
         }	
        }
    }
return 0;
}
