
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
      int n;cin>>n;
      int b=0;
          for (int i = 3; i * i <= 2 * n - 1; i += 2)
            {++b;}
             cout<<b<<endl;       
    }
return 0;
}
