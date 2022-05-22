
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {

ll t;cin>>t;
while(t--)
{	
	ll n;
	cin >> n;
	string s;
	cin>>s;
	ll tv=0; 
   ll k=n/2;
   ll v=0;
   ll cnt=0;
   for(ll i=0;i<n;i++)
   {
	   if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
	    {
		 
		 tv++;
		 if(i<k)
         {
			 v++;
		 } 
		}
	   	
   }
  // cout<<v<<endl;
   if(v>(tv-v))
    cnt+=1;
   
   
   for(ll i=n-1;i>=0 ;i--)
   {
   	if(i==k-1)
   		continue;
   	//cout<<i<<" ";
	 ll j=0;
	 ll count=0;
	 ll counti=tv/2;
	 while(j<(k))
	 {
		  ll ind;
		ll o;  
		 if(i-j<0)
		 {
			o=n+i-j; 
		 }
		 else
		  o=i-j;

	    if(s[o]=='a'||s[o]=='e'||s[o]=='i'||s[o]=='o'||s[o]=='u')
	      {count++;
	      	//cout<<count<<endl;
		  if(count>counti)
		    {cnt++;break;}

		  }
	   
	   
		j++;

	 }
	   //counti=tv-count;

  //if(counti<count)
  	//	cnt++;
   }
cout<<cnt<<endl;
}
return 0;
}
