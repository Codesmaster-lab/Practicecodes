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
      int A[n];


      for(int i=0;i<n;i++)
      {
      	cin>>A[i];
      } 
      int chk=0;
 
      if(n==2)
       {
       	if(A[0]>A[1])
       		chk=0;
       	else
       		chk=1;
       }     
      else
      for(int i=0;i<n-1;i++)
      {
  
      	for(int j=0;j<i;j++)
      	{
      		if(A[j]>A[i])
      			{goto label;}
      	}

      	for(int j=i+1;j<n;j++)
      	{
      		if(A[j]<A[i])
      			{goto label;}
      	}
      	chk=1;
      	break;
      	label:
      	{

      	}
      }
      if(chk==0)
      	cout<<"YES";
      else
      	cout<<"NO";
      cout<<endl;
    }

return 0;
}
