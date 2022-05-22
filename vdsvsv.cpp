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
       ll n;cin>>n;
       int i=1;
       int st=1;
       int xi=0;
       while(st<=n)
       {
       	st+=i;
       	i+=2;
       	xi++;
       }
       xi--;
       i-=2;
       st-=i;
    //  cout<<i<<" "<<st<<endl;
      if(n<=(int)(st+(i/2)))
         {
             for(int j=0;j<=i/2;j++)
             {
             	if(st==n)
             	{
             		cout<<j+1<<" "<<xi+1;
             		break;
             	}
             	st++;
             }
         }
      else
      {

            st+=i/2;
           for(int j=xi;j>=0;j--)
             {
             	if(st==n)
             	{
             		cout<<(i/2)+1<<" "<<j+1;
             		break;
             	}
             	st++;
             }
      }
      cout<<endl;   
    }
return 0;
}
