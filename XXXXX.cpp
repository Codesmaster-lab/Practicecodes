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
      ll cnt=0,sum=0,n,k;cin>>n>>k;
      int a[100000];
      for (ll i = 0; i < n; ++i)
             {
             cin>>a[i];  
             }  
            //ll cnt=0;
      for (ll i = 0; i < n; ++i)
      {ll sum=0;
      	for (ll j =i ; j < n; ++j)
      	{
      		sum+=a[j];
      		if(sum%k!=0){cnt=max(cnt,j-i+1);//cout<<sum<<endl;
      		}
      	}

      }
       if(cnt)
      		cout<<cnt<<endl;
      	else
      		cout<<-1<<endl;
    }
return 0;
}
