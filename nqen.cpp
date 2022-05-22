#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)

string evolve(string s,int n,int m)
{
for (int i = 0; i < n; ++i)
{
	if(s[i]=='1')
	{
		int st=0,end=n-1;
		st=max(st,i-m);
		end=min(end,i+m);

        int j;
		for (j = st; j <=end; ++j)
		{
			if(s[j+1]=='0')
			break;
		     else
			s[j]='1';
		}
     	
     	i=j+1;
	}

}

return s;
}

int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {
      int n,m;
      cin>>n>>m;
      string s;
      cin>>s;
      
      	s=evolve(s,n,m);
      	//cout<<s<<endl;
      
      cout<<s<<endl;
    }
return 0;
}





//  010000010