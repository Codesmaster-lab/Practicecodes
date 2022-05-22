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
     int n,l,r;
     cin>>n>>l>>r;
     int a[n];
     int cnt=0;
     for (int i = 0; i < n; ++i)
       {
       	 cin>>a[i];
       	 
       }
       sort(a,a+n);
       for (int i = 0; i < n; ++i)
       {
       	if(a[i]>=l && a[i]<=)
       }

       cout<<cnt<<endl;  
    }
return 0;
}

/*

i: 0-> n-1
a[i]
j: l->r
j-a[i]

*/