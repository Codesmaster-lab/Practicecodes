#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int check(char a,char b)
{
	if(a=='R' && b=='P')
		return 2;
    else if(a=='P' && b=='S')
    	return 2;
    else if(a=='S' && b=='R')
    	return 2;
    else return 1;
}
int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {
       int n;cin>>n;
       int a=0,b=0,c=0;
       for (int i = 0; i < n; ++i)
       {
       	char A,B,C;cin>>A>>B>>C;
        	 if(A==B)
       	    {a+=0;
       	    	b+=0;}
       else	if(check(A,B)==1)
       	{
       		a++;
            b--;
       	}
     
       	else
       		{b++;a--;}
       if(C==B)
       	    {c+=0;
       	    	b+=0;}
       	else if(check(B,C)==1)
       	{
       		b++;
            c--;
       	}

       	 
       	else
       		{
       			c++;
       			b--;
       		}
       
        if(A==C)
       	    {a+=0;
       	    	c+=0;}
       	else if(check(A,C)==1)
       	{
       		a++;
            c--;
       	}

       	else
       		{
       			c++;
       			a--;
       		}
       		//cout<<a<<" "<<b<<" "<<c<<endl;	
        }
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
return 0;
}
