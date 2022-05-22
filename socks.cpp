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
       int n,l,r;cin>>n>>l>>r;
       std::vector<int> vl,vr;
       for (int i = 0; i < n/2; ++i)
            {
            	int a;cin>>a;
            	vl.push_back(a);
            }
        for (int i = 0; i < n/2; ++i)
            {
            	int a;cin>>a;
            	vr.push_back(a);
            }         
        sort(vl.begin(),vl.end());
        //sort(vr.begin(),vr.end());
        int c=1;
        int cnt=0;
     

            cout<<cnt<<endl;    
    }
return 0;
}
