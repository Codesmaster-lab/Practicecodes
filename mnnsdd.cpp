#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}


int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {
      ll a,b;cin>>a>>b;
      if(a==b)
      cout<<0<<" "<<0;
      else
      {
      	ll gc,mo;
        
        if(a<b)
        {
            ll g=a;
            a=b;
            b=g;
        }

        if(b==0)
        {
          cout<<a<<" "<<0;
        }

       else{  
                
                ll o=a-b;
              
                int k=1;
                while(k*o<b)
                    {k++;}


               cout<<o<<" "<<min(a%o,o-a %o);
                        
            }     
        
        

      	
      }
      cout<<endl;     
    }
return 0;
}
