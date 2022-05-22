#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)

bool check(string s,int n)
{cout<<max((int)s[0]-(int)'a',(int)s[n-1]-(int)'a')+1<<endl;
if(max((int)s[0]-(int)'a',(int)s[n-1]-(int)'a')+1 != n)
  	{cout<<"dss";return false;}
else{
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
  int j=ind+1;
  while(j<n)
  {
  	if(s[j]-s[j-1]>1)
  		return false;
  	j++;
  }
  int k=ind-1;
  while(k>=0)
  {
  	if(s[k]-s[k+1]>=1)
  		return false;
  	k--;
  }
  return true;}
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
	