#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)

void changes2(ll a,ll b,ll p,ll q)
{
   if(p-a == q-b)
   	cout<<1;
   else if(a==0 || b==0)
   {
   	cout<<2;
   }
   else if(p%a==0 && q%b==0 && p/a==q/b)
   	cout<<2;
   else
   	cout<<2;
   cout<<endl;
}

void changes3(ll a,ll b,ll c,ll p,ll q,ll r)
{
	if(p-a==q-b && q-b==r-c)
		cout<<1;
	else if(p%a==0 && q%b==0 && r%c==0 && p/a==q/b && q/b==r/c)
		cout<<1;
	else if((p-a==q-b)||(p-a==r-c)|| (r-c==q-b))
		cout<<2;
	else if((p%a==0 && q%b==0  && p/a==q/b )||(p%a==0  && r%c==0 && p/a==r/c)||( q%b==0 && r%c==0 &&  q/b==r/c))
		cout<<2;
    else
    	cout<<3;
    cout<<endl;

}

int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {int chn=0;
      ll a,b,c,p,q,r;
      cin>>a>>b>>c;
      cin>>p;if(p!=a)chn++;
      cin>>q;if(q!=b)chn++;
      cin>>r;if(r!=c)chn++; 
      if(chn==0)
        cout<<0<<endl;
      else if(chn==1)
      {
      	cout<<1<<endl;
      }
      else if(chn==2)
      {
      if(p==a)
      	changes2(b,c,q,r);
      else if(q==b)
      	changes2(a,c,p,r);
      else if(c==r)
      	changes2(a,b,p,q);
     }
      else
      {changes3(a,b,c,p,q,r);}     
    }
return 0;
}
