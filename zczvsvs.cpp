#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)

int main()
{
	IOS;
	int n;cin>>n;
	if(n>=4)
	{
		int sum=0;
		int i=n-2;
		int cn=2;
        while(cn<=i)
        {
        	
          	sum+=3*(cn-1);
        	cn++;
        	i--;
        }
        cout<<sum<<endl;

	}
    else
    	cout<<0<<endl;
return 0;
}
