//vnrtysfrzrmzlygfv

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)

    string longestPalin (string s) {
       int n=s.size();
       int cnt=1;
       int l=0;
       int r=0;
       //int cg=0;
       for(int i=0;i<=n-2;i++)
       {
           int j=i+1;
           int k=i;
           int c;
           while(s[j]==s[k]&& k>=0 && j<n)
           {

               j++;
               k--;
           }
           c=(j-k+1);
           //cout<<c<<" "<<l<<" "<<r;
           if(cnt<c)
           {
             cnt=c;
             l=k;
             r=j;
           }
           //cnt=max(cnt,c);
       }
       
      for(int i=1;i<=n-2;i++)
       {
           int j=i+1;
           int k=i-1;
           int c;
           while(s[j]==s[k] && k>=0 && j<n)
           {
               j++;
               k--;
           }
          c=(j-k+1);
           //cout<<c<<" "<<l<<" "<<r;
           if(cnt<c)
           {//cg=1;
             cnt=c;
             l=k;
             r=j;
           }
           //cnt=max(cnt,c);
       }

       string d="";
       string h="";
       //cout<<cnt<<endl;
       if(cnt!=1)
       {
       for(int i=l+1;i<r;i++)
       {//cout<<i<<" ";
           d+=s[i];
       }
       //cout<<endl<<r-l<<endl;
       if((r-l)==2)
       return (h+s[0]);
       else 
       return d;
      }
     else 
     return d+s[0];
      
  }
int main()
{
     IOS;
     ll t;cin>>t;
    while(t--)
    {
     string s;cin>>s;
     cout<<longestPalin(s)<<endl;  
    }
return 0;
}
