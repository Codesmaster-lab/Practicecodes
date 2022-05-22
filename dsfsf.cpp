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
       int n,x;
       cin>>n>>x;
       int a[n];
       set<int> s;
       for (int i = 0; i < n; ++i)
              {
              	int a[i];cin>>a[i];
              s.insert(a[i]);
              } 
        int c=s.size();
        sort(a,a+n);
        int max=a[n-1];
        int mex=0;
        for (int i = 0; i < n; ++i)
                    { 
                    	if(mex==a[i])
                    	{
                    		mex++;
                    	}

                    	else if(mex<a[i])
                    	{
                          break;
                    	}
                    	else mex++;
          
                    }        
        s.insert(ceil((mex+max)/2));
         int k=s.size();
         if(k==c)
         {
           cout<<c<<endl;
         }  
         else
         {
           cout<<k<<endl;
         }                
    }
return 0;
}
