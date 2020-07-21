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
      int k=4*n-1;
     int x[k],y[k];
      for (int i = 0; i < (4*n)-1 ; ++i)
            {
            	cin>>x[i]>>y[i];

            }      
            sort(x,x+k);
            sort(y,y+k);
            int p,l,cnt=1;
       for (int i = 0; i < k; ++i)
            {
               if(x[i+1]!=x[i] && cnt%2==1 )
               {
               	p=x[i];
               	break;
               }
               else if(x[i+1]==x[i] )
               {cnt++;}
              else
              	cnt=1;
            }//cout<<cnt<<endl;
            cnt=1;
   for (int i = 0; i < k; ++i)
            {
               if(y[i+1]!=y[i] && cnt%2==1 )
               {
               	l=y[i];
               	break;
               }
               else if(y[i+1]==y[i] )
               {cnt++;}
              else
              	cnt=1;
            }          
            //cout<<cnt<<endl;
            cout<<p<<" "<<l<<endl;
    }
return 0;
}
