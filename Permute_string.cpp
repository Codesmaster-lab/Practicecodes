#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)

		
		
		void permute(string s, vector<string> &ans,int l,int r)
		{
		   int  n=r+1;
		    if(l==r)
		    {
		     //cout<<s<<endl;
		        ans.push_back(s);
		        
		    }
		  else{  
		  
		  for(int i=l;i<=r;i++)
          {
                  swap(s[l],s[i]);
            permute(s,ans,l+1,n-1);
           swap(s[l],s[i]);
              
              
          }
          
		  }
		    
		}
		
		
		
		vector<string>find_permutation(string s)
		{
		  int n=s.size();
          vector<string> ans;
          permute(s,ans,0,n-1);
          return ans;
		}


int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {
       string s;cin>> s;
       vector<string> ans;
       ans= find_permutation(s);       
    }
return 0;
}
