#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int main()
{
	IOS;
	string hr="";
	string s;cin>>s;
	int i=0;
	int r=0;
    while(i<2)
    {
    	hr+=s[i];
    	
    	r=r*10;
        r+=(int)s[i]-(int)'0';
    i++;
    }
    int y=0;
    while(r!=0)
    {
    	y*=10;
    	y+=(r/10);
    	r=r/10;
    }
    cout<<y<<endl;
   int chg=0;
   i=3;
   while(i<5)
    {
    	chg*=10;
        chg+=(int)s[i]-(int)'0';
    	i++;
    }


cout<<chg;





return 0;
}
