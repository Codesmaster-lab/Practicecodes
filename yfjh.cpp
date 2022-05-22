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
      if(n==1)
      cout<<1<<endl;
      else if(n==2)
      cout<<-1<<endl;
      else
      {
      	int k=1;
      	vector<int> b,r;
      	for (int i = 1; i <= n; ++i)
      	{
      	   for (int j = 1; j <= n; ++j)
      	   {
      	   	if((i+j)%2 ==1)
      	   	{
      	   		b.push_back(k);
      	   	}
      	   	else
      	   		r.push_back(k);

      	   	k+=1;
      	   }
      	}
      	//cout<<r.size()<<" "<<b.size()<<endl;
      	sort(b.begin(), b.end());
      	sort(r.begin(),r.end());
      	int e=b.size();
      	//cout<<r[e-1];
      	int u=0;
      	int v=0;
      	for (int i = 0; i < n; ++i)
      	{
      	   for (int j = 0; j < n; ++j)
      	   {
      	   	 if(u<e)
      	       {cout<<b[u]<<" ";u++;}
      	     else 
      	       {cout<<r[v]<<" ";v++;}    	   
      	   }
      	   cout<<endl;
      	}

      }       
    }
return 0;
}
