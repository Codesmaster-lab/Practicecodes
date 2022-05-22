#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)

void printfd(std::vector<int> v,int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {
       
        int k;cin>>k;
        int a[k];
         int ce=0;
         int co=0;
        std::vector<int> ev,od;
        for (int i = 0; i < k; ++i)
        {
        	cin>>a[i];
        	if(a[i]%2==0)
        		{ev.push_back(i);ce++;}
        	else
        		{od.push_back(i);co++;}
        }
         //cout<<co<<ce<<endl;
        //printfd(ev,ce);
        //printfd(od,co);
//int i=0;
//cout<<a[od[i]]<<endl;

     	int i;
     	for ( i = 0; i < ce; ++i)
     	{
     		cout<<a[ev[i]]<<" ";
     	}
     	for (int j = 0; j < co; ++j)
     	{
     		cout<<a[od[j]]<<" ";
     	}
     
cout<<endl;

    }
return 0;
}
