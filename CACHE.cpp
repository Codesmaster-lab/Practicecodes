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
     int c1=0,c2,n,b,m;cin>>n>>b>>m;
     int A[5002];int cnt=1;c2=0;
     cin>>A[0];
        c1=((int)(A[0]/b))*b;
        c2=c1+b-1;
     for (int i = 1; i < m; ++i)
     {
     	cin>>A[i];
     	if(!(A[i]<=c2 && A[i]>=c1))
     	{
     	cnt++;
        c1=((int)(A[i]/b))*b;
        c2=c1+b-1;
        //cout<<cnt<<" "<<c1<< " "<<c2<<endl;
        }
     }

 cout<<cnt<<endl;
    }
return 0;
}
