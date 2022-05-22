#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
bool checkcomp(string s,int n)
{
	//string :: iterator i;
	for ( int i = 0; i <=n-1; ++i)
	{
		if(s[i] == '0')
			return false;
	}
	return true;
}

bool palin(string str,int n)
{
    // Start from leftmost and rightmost corners of str
    int l = 0;
    int h = n - 1;
  
    // Keep comparing characters while they are same
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            //printf("%s is Not Palindrome", str);
            return false;
        }
    }
   // printf("%s is palindrome", str);

return true;
}

bool possible(string s,int n)
{
int cnt=0,index;
 for (int i = 0; i <= n/2; ++i)
 {
 	if(s[i]!=s[n-i-1])
 		{cnt++;index=i;}
 }
 if(cnt==1)
 {
  	if(s[index]=='0')
  	{
  		s[index]='1';
  	}
  	else
  		s[n-1-index]='1';
return true;
 }
else
  return false;
}

int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {
      int n;cin>>n;
      string s;cin>>s;
      int prev=0;
      int turn=0;
      int a[2]={0,0};

      while(!checkcomp(s,n))
      {
        if(prev==0 && !palin(s,n))
        {
        	reverse(s.begin(), s.end());
        	turn++;
        	turn=turn%2;
        	prev=1;
        }
        else
        {
         if(!possible(s,n))
         for (int i = n/2; i >= 0; i--)
          {
          	if(s[i]=='0')
          		{s[i]='1';break;}
          	else if(s[n-i-1]=='0')
          	   {s[i]='1';break;}
          }
         a[turn]++;
          turn++;
         turn=turn%2;
        	prev=0;
        }
      } 
      if(a[0]>a[1])
      	cout<<"BOB";
      else if(a[0]==a[1])
      	cout<<"DRAW";
      else
      	cout<<"ALICE";
      cout<<endl;
    }
return 0;
}
