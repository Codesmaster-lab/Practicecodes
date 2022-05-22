#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int main()
{
	IOS;
	int c=1;
	lb:
	int n;cin>>n;
	if(n!=42 && c==1)
	{
		cout<<n<<endl;
		goto lb;
	}
	else
	{
		c=0;
		goto lb;
	}
return 0;
}
