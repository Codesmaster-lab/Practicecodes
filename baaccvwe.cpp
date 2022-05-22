#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
 
bool check(string s,int n)
{
  
int i=0;
int ind=-1;
set<char > sr;
while(i<n)
{
  if(s[i]=='a')
  	ind=i;
  sr.insert(s[i]);
	i++;
}
 
int y=sr.size();
if(y<n)
	return false;
else if(ind==-1)
	return false;
else
{
  int h=n-1;
  char ch='b';
  while(h>0)
  {
    if(s[ind+1]==ch)
    {
      s.erase(s.begin()+ind+1);
    }
  else if(s[ind-1]==ch)
    {
      s.erase(s.begin()+ind-1);
      ind--;
    }
  else
  {

    return false;
  }
    ch++;
    h--;
  }
  return true;

}
 
}
 
int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {
       string s;cin>>s;
       int n;n=s.size();
      if(check(s,n))
      cout<<"YES";
      else
      cout<<"NO";  
  cout<<endl;
    }
return 0;
}