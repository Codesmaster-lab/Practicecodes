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
     int c=0;
     int A[100000],B[100000];
     std::vector<ll>  Xa,Xb;
      Xa.push_back(0);
      for (int i = 0; i < n; ++i)
      {
      	cin>>A[i];
      	Xa.push_back(c+A[i]);
      	c=Xa[i+1];
      }
c=0;Xb.push_back(0);
      for (int i = 0; i < n; ++i)
      {
      	cin>>B[i];
      	Xb.push_back(c+B[i]);
      	c=Xb[i+1];
      }
      ll sum=0;
      for (int i = 1; i < n+1; ++i)
      {
      	if(Xb[i]==Xa[i] && Xb[i-1]==Xa[i-1])
      		sum+=Xa[i]-Xa[i-1];
      }
      cout<<sum<<endl;

    }
return 0;
}
