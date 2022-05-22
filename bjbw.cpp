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
      int a[n];
      int cnt=0;
      int cnto=0;
      for(int i=0;i<n;i++)
      {
       cin>>a[i];
        if(a[i]<0)
        	cnt++;
        else if(a[i]==0)
        	cnto++;
      }

sort(a,a+n);

int k=cnt+cnto;
if(k<n)
{
int y=a[k];
k+=1;
//cout<<k<<endl;
for (int i = 0; i < k-1; ++i)
{
	if(a[i+1]-a[i]<y)
     {
     	k=k-1;
     	break;
     }
}
cout<<k<<endl;
}
else
{
	cout<<k<<endl;
}
    
    }
return 0;
}
