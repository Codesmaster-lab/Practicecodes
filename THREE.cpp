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
      ll A[1000];
       ll max=INT_MIN,pos=0;
       for (int i = 0; i < n ; ++i)
       {
       	cin>>A[i];
       }int c=0;
       for (int i = 1; i < n-1; ++i)
       {
       	if(A[i]>A[i-1] && A[i]>A[i+1])
       	{ 
       		c=1;
       		cout<<"YES"<<endl<<i<<" "<<i+1<<" "<<i+2<<endl;break;
       	}
       }
       if(c==0)
       	cout<<"NO"<<endl;
    }
return 0;
}
