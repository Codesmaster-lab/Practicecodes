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
       int cnt=0;
       int A[1000];
       for (int i = 0; i < n; ++i)
         {
           cin>>A[i];	
           for (int j = 0; j < i; ++j)
           {
           	if((A[j]&A[i])==A[j])
           		cnt++;
           }
         }
        cout<<cnt<<endl;   

    }
return 0;
}

//Bij=Ai
//i<j