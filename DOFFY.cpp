#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int main()
{
	IOS;
	ll t;cin>>t;
    while(t--){
      int n;cin>>n;
      int c=1;
      for (int i = 0; i < n; ++i)
             {int a;
             	cin>>a;
                 if(a%2==0)
                  c=0;    
             }       
     if(c==0)
     	cout<<"NO"<<endl;
     else
     	cout<<"YES"<<endl;
    }
return 0;
}

