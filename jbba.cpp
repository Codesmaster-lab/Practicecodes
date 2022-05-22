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
        int a,b,c;
        cin>>a>>b>>c;
        int k=b;
        int l=a;

        if(a>b)
        { 
         	b=a;
         	a=k;
        }
string sa="",sb="";
        if(c<a)
        {
          //string sa="",sb="";
          b=b-c;
          a=a-c;
          sa+="1";
          a--;
          sb+="1";
          b--;
          while(a--)
          	sa+="0";
          while(b--)
          	sb+="0";

          c=c-1;
          sa+="1";
          sb+="2";
           
          while(c--)
          {
           sa+="0";sb+="0";
          }
          //cout<<sa<<" "<<sb<<endl;

        }
        else if(c==a)
        {
           //string sa="",sb="";
          b=b-c;
          c=c-1;
          sa+="1";
          sb+="1";
          while(c--)
          {
           sa+="0";sb+="0";
          }
          while(b--)
          {
          	sb+="0";
          }
          //cout<<sa<<" "<<sb<<endl;
        }
    if(k>l)
    	cout<<sa<<" "<<sb<<endl;
    else
    	cout<<sb<<" "<<sa<<endl;

    }
return 0;
}
