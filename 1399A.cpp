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
      int A[n];
      for (int i = 0; i < n; ++i)
       {
       	cin>>A[i];
       } 
       sort(A,A+n);
       int c=1;
       for (int i = 1; i < n; ++i)
       {
       	if(A[i]-A[i-1]>1)
       		{c=0;break;}

       }
       c==1?cout<<"YES":cout<<"NO";

       cout<<endl;
    }
return 0;
}
	