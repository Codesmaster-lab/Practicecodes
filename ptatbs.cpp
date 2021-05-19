#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)

char add(char a,char b,char c)
{
	if((int)a+(int)b+(int)c-(3*(int)'0')>2)
		return '1';
	else if((int)a+(int)b+(int)c-(3*(int)'0')==2)
		return '0';
	else
		return '1';
}

char carryadd(char a,char b,char c)
{
	if((int)a+(int)b+(int)c-(3*(int)'0')>=2)
		return '1';
	
	else
		return '0';

}

string addbinary(string a,string b){
 int as=a.size(),bs=b.size();
string c;
char carry='0';
 if(as>=bs)
 {cout<<a<<b<<c<<endl;
   for(int i=0;i<as;i++)
   	{
   		if(b[bs-i-1]!='\0')
   		  {c[i]=add(a[as-i-1],b[bs-i-1],carry);
              carry=carryadd(a[as-i-1],b[bs-i-1],carry);
   		  }

   		else
           {c[i]=add(a[as-i-1],'0',carry);
              carry=carryadd(a[as-i-1],'0',carry);
   		  }

   	}
 }
 else
 	{
        for(int i=0;i<bs;i++)
   	{
   		if(a[as-i-1]!='\0')
   		  {c[i]=add(a[as-i-1],b[bs-i-1],carry);
              carry=carryadd(a[as-i-1],b[bs-i-1],carry);
   		  }

   		else
           {c[i]=add(b[bs-i-1],'0',carry);
              carry=carryadd(b[bs-i-1],'0',carry);
   		  }

   	}   
 	}
return c;
}
int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {
       string a,b;cin>>a>>b;
       cout<<addbinary(a,b);
       cout<<a<<b;         
    }
return 0;
}
