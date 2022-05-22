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
     int n,m;cin>>n>>m;
     char s[n][m];
     for (int i = 0; i < n; ++i)
            {
            	for (int j = 0; j < m; ++j)
            	{
            		cin>>s[i];
            		if((s[i]=='R' || s[i]=='W') && c==0)
            		{
            			f=s[i];
                        indx=i;
                        indy=j;
                        p=(indx+indy)%2;
            		}
            	}
            }





     for (int i = 0; i < n; ++i)
            {
            	for (int j = 0; j < m; ++j)
            	{
            		
            		if((s[i]==f) )
            		{
             
            			if(i+j % 2 !=p)
            			{
            			  cout<<"NO"<<endl;
                          goto label;
            			}

            		}
            		else if()
            		else
            		{
            			s[i]=(ch==1?'R':'W');
            			ch+=1;
            			ch%=2;
            		}
            	}
            }




           label:{}               
    }
return 0;
}
