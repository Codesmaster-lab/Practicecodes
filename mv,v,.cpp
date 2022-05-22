#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
bool checkcomp(string s)
{
	string :: iterator i;
	for ( i = s.begin(); i !=s.end(); ++i)
	{
		if(*i == '0')
			return false;
	}
	return true;
}

bool palin(string str)
{
    // Start from leftmost and rightmost corners of str
    int l = 0;
    int h = str.size() - 1;
  
    // Keep comparing characters while they are same
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            //printf("%s is Not Palindrome", str);
            return false;
        }
    }
    return true;
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

      while(!checkcomp(s))
      {
        if(prev==0 && !palin(s))
        {
        	reverse(s.begin(), s.end());
        	turn++;
        	turn=turn%2;
        	prev=1;
        }
        else
        {
          for (int i = 0; i < n; ++i)
          {
          	if(s[i]=='0')
          		{s[i]='1';break;}
          }
         a[turn]++;
          turn++;
         turn=turn%2;
        	prev=0;
        }
      } 
      if(a[0]>a[1])
      	cout<<"ALICE";
      else if(a[0]==a[1])
      	cout<<"DRAW";
      else
      	cout<<"BOB";
      cout<<endl;
    }
return 0;
}
