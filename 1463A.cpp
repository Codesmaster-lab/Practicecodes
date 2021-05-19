#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
ll func(int A[],int a,ll b,ll c)
{
	return (abs(A[a]-A[b])+abs(A[a]-A[c])+abs(A[c]-A[b]));
}
int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {
       int A[100000];
       int n;cin>>n;
       int mi,ma;
       ll min=INT_MAX,max=INT_MIN;
        for (int i = 0; i < n; ++i)
        {
        	cin>>A[i];
        	if(A[i]<=min)
        	{
        		min=A[i];
        		mi=i;
        	}
        	if(A[i]>=max)
        	{
        		max=A[i];
        		ma=i;
        	}

        }
        //cout<<mi<<ma<<endl;
        ll sum=0;
        for (int i = 0; i < n ; ++i)
        {if( i!=mi && i!=ma)
        	{ll s=func(A,i,mi,ma);
        	//cout<<s<<endl;
        	if(s> sum)
        		sum=s;
        }
        }
        cout<<sum<<endl;
    }
return 0;
}

// 3 2 4    2 3 4   