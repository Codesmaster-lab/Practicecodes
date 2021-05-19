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
      int A[100000];
      for (int i = 0; i < n; ++i)
             {
             	cin>>A[i];

             }
             ll sum=0;
             sort(A,A+n,greater<int>());
             if(n>3)
             for (int i = 0; i < n; i=i+3)
             {
             	sum+=(A[i]<A[i+1]?(A[i]<A[i+2]?A[i]:A[i+2]):(A[i+1]<A[i+2]?A[i+1]:A[i+2]));
             }
             else
                sum=0;
cout<<sum<<endl;
    }
return 0;
}
