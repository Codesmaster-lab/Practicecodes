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
       for(int i=0;i<n;i++)
       {
       	cin>>A[i];
       }
       int q;cin>>q;
       int cnt=0,c=1;
       for (int i = 0; i < q; ++i)
       {
       	int x,y;cin>>x>>y;
       	for (int j = 0; j < n; ++j)
       	{
       		if(x+y>A[i])
       			cnt++;
       		else if(x+y==A[i])
       		{c=0;
       			cout<<-1<<endl;
       			break;
       		}

       	}
       	cout<<cnt<<endl;
       }
       
    }
return 0;
}
