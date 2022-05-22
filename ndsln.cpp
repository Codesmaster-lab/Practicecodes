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
       int a[n],b[n];
       ll suma=0;ll sumb=0;
       for(int i=0;i<n;i++)
       {
       	cin>>a[i];
        suma+=a[i];
       }
       int x=0;
       for(int i=0;i<n;i++)
       {
       	cin>>b[i];
       	if(a[i]-b[i]>0)
            	x++;
       	sumb+=b[i];
       }

       if(suma!=sumb)
       	 cout<<-1;
       else
       	{
       		vector<pair<int,int> >v;
          for(int i=0;i<n;i++)
          {
            for(int j=i+1;j<n;j++)
            {
            	if(a[i]-b[i] < a[j]-b[j])
            	{
            		
            	}
            }
            
          }

          int i=0;
          
       	}


    }
return 0;
}
