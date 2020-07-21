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
       float v1,v2,v3,t1,t2,t3;
       cin>>v1>>t1>>v2>>t2>>v3>>t3;
      if(v3>(v1+v2))
      {
      	cout<<"NO";
      }
      else if(t3>t2 || t3<t1)
      	cout<<"NO";
      else
      {
      	float v=v3*(t3-t1)/(t2-t1);
      	float w=v3*(t2-t3)/(t2-t1);
      	if(v<=v2 && w<=v1)
      		cout<<"YES";
      	else
      		cout<<"NO";

      }
      cout<<endl;
    }
return 0;
}

/*

*/