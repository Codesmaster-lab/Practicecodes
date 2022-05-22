#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int maxi(int ai,int b,int c,int d)
{
	int a[4];
	a[0]=ai;
	a[1]=b;
	a[2]=c;
	a[3]=d;
	sort(a,a+4);
	return a[3];
}

int maxio(int ai,int b,int c,int d)
{
	int a[4];
	a[0]=ai;
	a[1]=b;
	a[2]=c;
	a[3]=d;
	sort(a,a+4);
	return a[2];
}

int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {
     int a,b,c,d;
     cin>>a>>b>>c>>d;
     int l=maxi(a,b,c,d);
     int lo=maxio(a,b,c,d);
     if((l==d && lo==c) || (l==c && lo==d) )
     cout<<"NO"<<endl;
     else if ( (l==a && lo==b) || (l==b && lo==a) )
     cout<<"NO"<<endl;
     else
     cout<<"YES"<<endl;      
    }
return 0;
}
