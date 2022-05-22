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
     int ax,ay,bx,by,fx,fy;
     cin>>ax>>ay;
     cin>>bx>>by;
     cin>>fx>>fy;
     if(fx==ax && ax==bx && ((fy>ay  && fy<by)||(fy>by  && fy<ay)) ) 
     {
       cout<<abs(ax-bx)+abs(ay-by)+2<<endl;  
     }
     else if(fy==ay && ay==by && ((fx>ax  && fx<bx)||(fx>bx  && fx<ax)))
     {
       cout<<abs(ax-bx)+abs(ay-by)+2<<endl;
     }
     else
     cout<<abs(ax-bx)+abs(ay-by)<<endl;       
    }
return 0;
}
