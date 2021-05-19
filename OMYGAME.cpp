#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int main()
{
	IOS;
	ll n;cin>>n;
	int A[1000][1000];
	ll sum=0;
    for (int i = 0; i < n; ++i)
    {int x=0;
       for (int j = 0; j < n; ++j)
       {
       	cin>>A[i][j];
       	if(i!=j)
       	 x|=A[i][j];
       }
       sum+=x;
    }
    cout<<sum<<endl
    
return 0;
}
