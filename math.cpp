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
      ll a,b;cin>>a>>b;
      float f,h;
      if(a>b)
      {
      	 f=(float)a/b;
      	 h=log2(f);
      	if(h-(int)h==0)
      		{int k=h;
      		    if(k==0)
      		    	cout<<0;
      		    else if(k<=3)
      		        cout<<1;
      	           else
      				cout<<((int)(k/3))+((k%3)<=2?1:2);
      		}
      	else
      		cout<<-1;
      }
      else
      {
        f=(float)b/a;
      	h=log2(f);
      	if(h-(int)h==0)
      		{int k=h;
      		    if(k==0)
      		    	cout<<0;
      		    else if(k<=3)
      		        cout<<1;
      	           else
      				cout<<((int)(k/3))+((k%3)<=2?1:2);	
      		}
      	else
      		cout<<-1;
      }  
      cout<<endl;
    }
return 0;
}
