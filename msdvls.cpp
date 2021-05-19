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
       int u[n];
      
       for (int i = 0; i < n; ++i)
              {
              	cin>>u[i];
              } 
 for (int i = 0; i < n; ++i)
 {
 	cout<<u[i];
 }
  vector<int > s[n];
       for (int i = 0; i < n; ++i)
              {
              	int a;cin>>a;
                 
                  s[(u[i])].push_back(a);
              } 
cout<<"OK"<<endl;
      for (int i = 0; i < n; ++i)
      {
        //sort(s[u[i]-1].begin(), s[u[i]-1].end());
        for (vector<int> ::iterator  itr =s[u[i]-1].begin() ; itr <= s[u[i]-1].end(); ++itr)
        {
        	cout<<*itr<<" ";
        }
        cout<<endl;
      }

         

    }
return 0;
}
