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
       int b,cnt=0;
       for (int i = 0; i < n; ++i)
       {
       	int a;cin>>a;
       	//v.push_back(a);
       	if (i>0)
       	{//cout<<b<<" "<<a<<" "<<((float)max(b,a)/min(b,a))<<endl;
       		
       		if(((float)max(b,a)/min(b,a))>2.0)
       		{
       			cnt+=(int)log2((float)max(b,a)/min(b,a));
       			if(log2((float)max(b,a)/min(b,a))-(int)log2((float)max(b,a)/min(b,a)) == 0.0 )
       			{cnt-=1;}
       		//	cout<<cnt<<endl;

       		}
       	}
       	b=a;
       }
       cout<<cnt<<endl;

    }
return 0;
}
