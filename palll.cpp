#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int check(string s)
{
	int n=s.size();
	 for (int i = 0; i <= (n-1)/2; ++i)
	 {
	 	if(s[i]!=s[n-i-1])
	 	{
          return 0;
	 	}
	 }
	 return 1;
}
int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {
     int a,b;cin>>a>>b;
     string s;cin>>s;
     int n=a+b;
     for (int i = 0; i < n; ++i)
                     {
                     	if(s[i]=='1' && s[n-i-1]=='?')
                     		{
                     			s[n-i-1]='1';
                            }
                        else if(s[i]=='0' && s[n-i-1]=='?')
                     		{
                     			s[n-i-1]='0';
                            }       
                     }
               //  cout<<s<<endl;    

     for (int i = 0; i < n; ++i)
             {
             	if(s[i]=='1')
             		b--;
             	else if(s[i]=='0')
             		a--;

             }
             //cout<<a<<b<<endl;
     int succ=1;
     for (int i = 0; i <= (n-1)/2; ++i)
             {

               if(s[i]=='?')
               {
                 if(i!=n-i-1)
             	{
                  if(a>1)
                  	{
                  		s[i]='0';a--;
                  		
                  				s[n-i-1]='0';a--;
                  				
                    }
                
                  else if(b>1)
                 {
                 	s[i]='1';b--;
                 	
                  				s[n-i-1]='1';b--;
                  }

                  else
                  	{succ=-1;break;}
                  				
                }
               else
               {
               	if(a>0)
                  	{
                  		s[i]='0';a--;
                  		
                  				//s[n-i-1]='0';a--;
                  				
                    }
                
                  else if(b>0)
                 {
                 	s[i]='1';b--;
                 	
                  				//s[n-i-1]='1';b--;
                  }
                  else
                  	{succ=-1;break;}
               } 
                   
                }
              



             	/*if(s[i]=='?')
             	{
                  if(a>0)
                  	{
                  		s[i]='0';a--;
                  		if(i!=n-i-1)
                  			{if(a>0){
                  				s[n-i-1]='0';a--;}
                  				else
                  				{
                  					succ=-1;break;
                  				}
                  			}
                    }
                  else if(b>0)
                 {
                 	s[i]='1';b--;
                 	if(i!=n-i-1)
                  			{if(b>0){
                  				s[n-i-1]='1';b--;}
                  				else
                  				{
                  					succ=-1;break;
                  				}
                  			}
                   
                 }
                   else
                   {
                   	succ=-1;
                   	break;
                   }  
             	}*/
             	

             }
             //cout<<succ<<a<<b<<endl;
      if(succ>0 && a==0 && b==0 && check(s))
      cout<<s<<endl;
      else
      cout<<-1<<endl;                                               
    }
return 0;
}
