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
		vector<int> A;
		for(int i=0;i<n;i++)
		{
			int a;cin>>a;
			A.push_back(a);
		}

  if(n>2)
  {
		sort(A.begin(), A.end());


         ll l[n],r[n];


         for(int i=0;i<n;i++)
         {
           l[i]=A[i]-A[0];
           r[i]=A[n-1]-A[i];
         }

         ll minindx=0;
         ll mindiff=abs(l[0]-r[1]);
         for(int i=1;i<n-1;i++)
         {
            if(abs(l[i]-r[i+1])<mindiff)
             {
             	minindx=i;
             	mindiff=abs(l[i]-r[i+1]);
             }
         }

 
        cout<<mindiff<<endl;
  }
  else
  cout<<0<<endl;


	}
	
return 0;
}
