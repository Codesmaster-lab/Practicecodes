#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)

int compare(int a[],int b[])
{
	int c =0;
	int y=0;
	for(int i=0;i<5;i++)
	{
		if(a[i]<b[i])
			c++;
		else 
			y++;
		if(c==3)
			return 1;
		else if(y==3)
			return 2;
	}
	return 1;
}

int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {
     int n;cin>>n;
     int a[n][5];
     for(int i=0;i<n;i++)
     {
     	for (int j = 0; j< 5; ++j)
     	{
     	   cin>>a[i][j];
     	}
     }  
if(n==1)
  {
  	cout<<1<<endl;
  	goto labe;
  }    

int sc[n];

for(int i=0;i<n;i++)
{sc[i]=0;}

for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
       if(compare(a[i],a[j])==1)
       sc[i]++;
       else
       sc[j]++;       
    }

}

for(int i=0;i<n;i++)
{if(sc[i]==n-1)
{
	cout<<i+1<<endl;
	goto labe;
}
}

cout<<-1<<endl;
labe:
  {}
}
return 0;
}
