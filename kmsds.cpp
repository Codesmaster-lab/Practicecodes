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
            vector<int> e,o;
            for (int i = 0; i < n; ++i)
             {
             	cin>>a[i];
             	if(a[i]%2==1)
             		o.push_back(a[i]);
             	else 
             		e.push_back(a[i]);
             } 
         
         vector<int> ::iterator it;
         for(it=o.begin();it!=o.end();it++)
         {
         	cout<<*it<<" ";
         }
         for(it=e.begin();it!=e.end();it++)
         {
         	cout<<*it<<" ";
         }
          cout<<endl;

    }
return 0;
}
