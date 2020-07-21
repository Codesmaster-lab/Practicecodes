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
       int A[n],B[200000]={};
       int maxi=INT_MIN;
       for (int i = 0; i < n; ++i)
       {
       	cin>>A[i];
       	maxi=max(maxi,A[i]);
        B[A[i]]++; 
       }
       int c=1;
       for (int i = 0; i <=maxi ; ++i)
       {cout<<B[i];
       	 if(B[i]%2==1 && B[i]!=1)
       	 {
       	 	c=0;
            break;
       	 }
       }
    //   int C[n],c=1;
       if(c)
         	cout<<"YES"<<endl;
       else
         	cout<<"NO"<<endl;
    }
return 0;
}
