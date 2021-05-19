#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {
    	int n;
       cin>>n;
       char a[n][n];
       int rc=0,cc=1;
      int row[2],colum[2];


       for(int i=0;i<n;i++)
       {
       	for(int j=0;j<n;j++)
       	{
          cin>>a[i][j];
          if(a[i][j]=='*')
          {
          	row[rc%2]=i;colum[cc%2]=j;
          	rc++;
          	cc++;
          }
       	}
       }
       
       if(row[0]!=row[1] && colum[0]!=colum[1])
       {     
       a[row[0]][colum[0]]='*';
       a[row[1]][colum[1]]='*';     

     for(int i=0;i<n;i++)
       {
       	for(int j=0;j<n;j++)
       	{
          cout<<a[i][j];
       	}
       	cout<<endl;
       }
       }
       else
       {
       	if(row[0]==row[1])
       	{
       		int k=(row[0]+1)%n;
       		a[k][colum[0]]='*';
            a[k][colum[1]]='*'; 
       	}
       else
       {
       	 int k=(colum[0]+1)%n;
         a[row[0]][k]='*';
       a[row[1]][k]='*';  
       }
        for(int i=0;i<n;i++)
       {
       	for(int j=0;j<n;j++)
       	{
          cout<<a[i][j];
       	}
       	cout<<endl;
       }
       }       
    }
return 0;
}
