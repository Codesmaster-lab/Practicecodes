#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)

int absi(int i,int j)
{if(i>j)
	return i-j;
else
return j-i;	
}

int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a;
          vector<int> v;
        for (int i = 0; i < n; ++i)
        {
        	cin>>a;
        	v.push_back(a);
        }

        for (int i = 0; i < n-1; ++i)
        {
        	for (int j = i+1; j < n; ++j)
        	{
        		int key=absi(v[i],v[j]);
        		if(!count(v.begin(), v.end(), key))
                    {
                    	v.push_back(key);
                    	n+=1;
                    	if(n>300)
                    	{
                    		cout<<"NO"<<endl;
                    		goto la;
                    	}
                    }
        	}
        }
        
        cout<<"YES"<<endl;
        cout<<n<<endl;
        for (int i = 0; i < n; ++i)
        {
        	cout<<v[i]<<" ";
        }
        cout<<endl;
        la: 
         {}
    }
return 0;
}
