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
        int n,m;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++)
        {
        	cin>>A[i];
        }       
        cin>>m;
        int B[m];
        for(int i=0;i<m;i++)
        {
        	cin>>B[i];
        }

        sort(A,A+n);
        sort(B,B+m);

        if(A[n-1]>B[m-1])
        {
         cout<<"Alice"<<endl;
         cout<<"Alice"<<endl;
        }
        else if(A[n-1]==B[m-1])
        {
          cout<<"Alice"<<endl;
          cout<<"Bob"<<endl;
        	
        }
        else
        {
          cout<<"Bob"<<endl;
          cout<<"Bob"<<endl;
        }


    }
return 0;
}
