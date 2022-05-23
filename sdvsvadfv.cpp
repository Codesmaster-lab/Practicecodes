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
     int A[n],B[n];
     for(int i=0;i<n;i++)
     {
     	cin>>A[i];
     	B[i]=A[i];
     }       
     sort(B,B+n);
     vector<int> v;
     for(int i=0;i<n;i++)
     {
     	if(A[i]!=B[i])
     	{
     		v.push_back(A[i]);
     	}
     }
     
     int x=v[0];
     int l=v.size();

     for(int i=1;i<l;i++)
      {
      	x=x&v[i];
      }
      cout<<x<<endl;
    }
return 0;
}
