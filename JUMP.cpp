#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int main()
{
    IOS;
    int n;cin>>n;
    int a[n];
    int jumps[n];
    int origin[n];
    
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
        jumps[i]=INT_MAX;
        origin[i]=INT_MAX;
    }
    
  
     
     jumps[0]=0;
     origin[0]=-1;

    for (int i = 1; i < n; ++i)
    {
        
        for (int j = 0; j< i; ++j)
        {
            if(a[j]+j>=i)
            {
                if(jumps[j]+1 <= jumps[i]  )
                { 
                    jumps[i]= jumps[j]+1;
                    origin[i] = j;
                }  
            }

        }
    }
   
   for (int i = 0; i < n; ++i)
   {
       cout<<jumps[i]<<" ";
   }

   for (int i = 0; i < n; ++i)
   {
       cout<<origin[i]<<" ";
   }

return 0;
}
