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
      int A[26]={};
      string c;cin>>c;
      for (int i = 0; i < n; ++i)
             {
             	
             	int k =(int)c[i] -'a';
             	A[k]++;
             }       
             int f=1;
      for (int i = 0; i < 26; ++i)
             {
             	if(A[i]%2==1)
             	{
             		f=0;
             		break;
             	}
             }       
        if(f)
        cout<<"YES";
        else
        cout<<"NO";
        cout<<endl;     
    }
return 0;
}
