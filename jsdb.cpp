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
        int n,w,wr;
        cin>>n>>w>>wr;
        int a[n];
        int sum=0;
        for (int i = 0; i < n; ++i)
        {
            cin>>a[i];
            sum+=a[i];
        }

sort(a,a+n);
        if(w<=wr)
          {cout<<"YES"<<endl;}
       
        else
        {
          if(sum<(w-wr))
          {
            cout<<"NO"<<endl;
          }
        
          else   // if(sum>=w-wr)
          {
            int cb=0;
             for (int i = 0; i < n; ++i)
             {
                 /* code */
            

           if(sum%2==0)
           {
             int k=sum/2;
             int o=0;
             for (int j = 0; j < n-1; ++j)
             {
                 o+=a[j];
                 if(o==k)
                 {
                    cout<<"YES"<<endl;
                    cb=1;
                    break;
                 }
             }
             sum-=a[n-i-1];

           }
           else
           {
            sum-=a[n-i-1];
           }
          }
          if(cb==0)

         cout<<"NO"<<endl;


    }
}}
return 0;
}
