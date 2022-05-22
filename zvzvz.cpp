#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int main()
{
	IOS;
	string s;
	cin>>s;
	int n=s.size();
	int x=0;
	int sum=0;
	for(int i=0;i<n;i++)
	{
      if(s[i]>='0'&&s[i]<='9')
      {
      	x*=10;
      	x+=((int)s[i]-(int)'0');
      } 
      else
      {
      	sum+=x;
      	x=0;

      } 
	}
	if(x>0)
		sum+=x;
	cout<<sum<<endl;
return 0;
}
