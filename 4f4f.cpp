#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int generate(int k)
{
	int l=0;
	while(k!=0)
	{
		l=l*10 +1;
		k--;
	}
	return l;
}

int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        if(n>=10)
        {
        	int i=0;
           int ti=n;
           while(ti!=0)
           {
           	i++;
           	ti=ti/10;
           }
                    int y=generate(i);
                    
           int k=(n/y)+((i-1)*9);
           cout<<k<<endl;
        }
        else
        {
        	cout<<n<<endl;
        }       
    }
return 0;
}
