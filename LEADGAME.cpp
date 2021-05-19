#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int main()
{
	IOS;
	ll t;cin>>t;
   int x,y;
       int a=0,b=0;
       int lead=-1,w;
    while(t--)
    {
        cin>>x>>y;
        a+=x;b+=y;
        if(a>=b)
        {
            if(lead < a-b)
            {
            	w=1;
            	lead=a-b;
            }

        } 
        else
         {
             if(lead < b-a)
            {
            	w=2;
            	lead=b-a;
            }  
         }
    }
    cout<<w<<" "<<lead<<endl;
        
return 0;
}
