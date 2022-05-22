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
          int a[n],p[n];
          for (int i = 0; i < n; ++i)
          {
          	cin>>a[i];
          }
          for (int i = 0; i < n; ++i)
          {
          	cin>>p[i];
          }
          int q;cin>>q;
          for (int i = 0; i < q; ++i)
          {
          	int ch;cin>>ch;
          	switch(ch)
          	{
          		case 1:
          		  { for (int j = 0; j < n; ++j)
          		   {
          		   	a[j]=a[p[j]];
          		   }break;}
          		case 2:
          		   {int x,y;cin>>x>>y;
          		   	x-=1;y-=1;
          		   int t=a[x];
          		   a[x]=a[y];
          		   a[y]=t;
          		   break;}
          		case 3:
          		{int x;
          		  cin>>x;
          		  cout<<a[x-1]<<endl;
                 break;}
          	}
          }
    }
return 0;
}
