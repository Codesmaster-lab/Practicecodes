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
     std::vector<int> v;;
     for (int i = 0; i < n; ++i)
            {
            	int a;cin>>a;
            	v.push_back(a);
            }
       sort(v.begin(), v.end());
       int cnt=0;
       for (int i = 0; i < n-1; ++i)
                   {
                   	  if(v[i]>0)
                   	  {
                   	  	break;
                   	  }
                   	  else
                   	  	cnt++;
                   }
        cout<<cnt+1<<endl;                       
    }
return 0;
}
