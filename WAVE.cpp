#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int main()
{
	IOS;
	int t,n;cin>>n>>t;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	sort(a,a+n);
    while(t--)
    {
        int s;cin>>s;
        int cnt=0;
        for (int i = 0; i < n; ++i)
        {
            if(s==a[i])
            {
              cnt=-1;
              break;
            }
            else if(s>a[i] && s< a[i+1])
            {
                break;
            }
            

        }
        //cout<<cnt<<endl;
        if(cnt==-1)
            cout<<0<<endl;
        else if(cnt%2==0)
        {
            cout<<"POSITIVE"<<endl;
        }
        else
            cout<<"NEGATIVE"<<endl;
    }
return 0;
}
