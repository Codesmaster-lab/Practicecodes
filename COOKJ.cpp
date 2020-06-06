#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
struct ci
{
	int val,pos;
};
int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {
       int n;cin>>n;
      int A[1000];
       int B[1001]={};
       set<int> s;int c=1;
       int cd;cin>>A[0];cd=A[0];B[A[0]]++;
       for (int i = 1; i < n; ++i)
       {
       	cin>>A[i];
        if(B[A[i]]!=0  && A[i]!=cd && c==1)
       { c=0;}
       else 
       	B[A[i]]++;
       cd=A[i];
       }
       set<int>v;
       for (int i = 1; i <= n; ++i)
       {//cout<<B[i]<<endl;
       	if(B[i]!=0 && v.find(B[i])!=v.end())
            {c=0;//cout<<i<<endl;
             break;
            }
            else
            	v.insert(B[i]);
       }
       if(c>0)
       	cout<<"YES"<<endl;
       else
       	cout<<"NO"<<endl;
    }
return 0;
}
