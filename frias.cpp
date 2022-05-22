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
        vector<int> v;
        int maxi=INT_MIN;
        int mini=INT_MAX;
        int in,im;
        for (int i = 0; i < n; ++i)
             {
             	int a;cin>>a;
             	v.push_back(a);
                if(maxi<a)
                  {
                  	maxi=a;
                  	im=i+1;
                  }
                   if(mini>a)
                  {
                  	mini=a;
                  	in=i+1;
                  }  
             }
//cout<<im<<in<<endl;
int k;
int cnt=0;
k=min(im,in)+min(n-im+1,n-in+1);
cnt=min(min(max(im,in),max(n-im+1,n-in+1)),k);
cout<<cnt<<endl;

    }
return 0;
}
