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
       int n,a,b;
       cin>>n>>a>>b;
       string s;cin>>s;
       int score=0;
             if(a<=0)
             {
                
               while(s!="")
               {cout<<s<<endl;
               	int cnt=1;
               	int l=0;
               	int r=0;
               	int li,ri;
               	int maxi=INT_MAX;
                   for (int i = 1; i < n; ++i)
                   {
                   	if(s[i]==s[i-1])
                   		{
                   			cnt++;r++;
                   		}
                   	else{
                   		if(cnt<maxi)
                   	        {
                   				maxi=cnt;
                   				li=l;ri=r;
                   			}
                   		cnt=1;
                   		l=i;r=i;
                   	}
                   	
                   }
                   cout<<li<<" "<<ri<<endl;
                  s.erase(s.begin()+li,s.begin()+ri); 
                  score+=(a*(ri-li)+b);
                  n-=maxi; 
               }     
             }
             else 
             {
               while(s!="")
               {
               	//cout<<s<<endl;
               	int cnt=1;
               	int l=0;
               	int r=0;
               	int li,ri;
               	int maxi=INT_MIN;
                   for (int i = 1; i < n; ++i)
                   {
                   	//cout<<cnt<<endl;
                   			if(cnt>maxi){
                   				maxi=cnt;
                   				li=l;ri=r;
                   			}
                   	if(s[i]==s[i-1])
                   		{
                   			cnt++;r++;
                   		}
                   	else{
                   		cnt=1;
                   		l=i;r=i;
                   	}
                   	
                   }
                  s.erase(s.begin()+li,s.begin()+ri); 
                  n-=(maxi);
                  score+=(a*(ri-li)+b); 
               }

             }
            cout<<score<<endl; 
    }
return 0;
}
