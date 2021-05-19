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
     vector<int> v;
     for (int i = 0; i < n+2; ++i)
        {
           int a;cin>>a;
           v.push_back(a);	
        }   
        sort(v.begin(),v.end());
        
        int succ=0;

    for (int i = 0; i < n+2; ++i)
        {
              int x,s=0;
              x=v[i];
              v.erase(v.begin()+i);
              for(int j=0;j<n;j++)
              {
                 s+= v[j];          
              }
              //cout<<s<<endl;
              if(s== *v.end())
               {succ=1;break;}
              else
              	v.insert(v.begin()+i,x);
        }
if(succ)
   for (int i = 0; i < n; ++i)
   {
   	cout<<v[i]<<" ";
   }
else
  cout<<-1;   
cout<<endl;
    }
return 0;
}
