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
     int A[100000];
     for (ll i = 0; i < n; ++i)
            {
            	cin>>A[i];
            }       
            sort(A,A+n);
      for (int i = 0; i < n; ++i)
      {
        if(A[i]==A[i+1])
        {cout<<"NO"<<endl;
        	break;
        }
        else
        {
        	
        }
      }
    }
return 0;
}
