#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int main()
{
	IOS;
	int n;cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
    sort(a,a+n);
    int cnt=1;
    int st=0;
    
    for (int i = 1; i <n; ++i)
    {
    	a[i]+=a[i-1];
        if(a[i]-a[i-1]4)
        	cnt++;
    }

    cout<<cnt<<endl;
return 0;
}
