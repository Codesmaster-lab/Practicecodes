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
     int k,n,m;cin>>k>>n>>m;
     
  int a[n],b[m];
     for (int i = 0; i < n; ++i)
     {
     	cin>>a[i];
     }

   for (int  i = 0; i < m; ++i)
      {
     	cin>>b[i];
     }



     int i=0;
     int j=0;
     int c=1;

vector<int> v;
     

     while(i<n && j<m)
     {
     	//cout<<k<<endl;
     	if(a[i]==0)
     	{k+=1;//cout<<k<<endl;
     		v.push_back(a[i]);
     		i++;}
        else if(b[j]==0)
     	{k++;v.push_back(b[j]);j++;}
       else if(a[i]<=k)
       {
       	v.push_back(a[i]);i++;
       }
       else if(b[j]<=k)
       {
       	v.push_back(b[j]);j++;
       }
       else
       {
       //	cout<<"h";
       	c=0;
       	break;
       }
     
     }
    
    if(i<n && c==1)
    {
       while(i<n )
     {
     	if(a[i]==0)
     	{k++;v.push_back(a[i]);i++;}
        else if(a[i]<=k)
       {
       	v.push_back(a[i]);i++;
       }
       else
       {

       	c=0;
       	break;
       }
     
     }    
    } 

    else if(j<m && c==1)
    {
      while( j<m)
     {
      if(b[j]==0)
     	{k++;v.push_back(b[j]);j++;}
       
       else if(b[j]<=k)
       {
       	v.push_back(b[j]);j++;
       }
       else
       {
       	//cout<<k<<" "<<b[j];
       	c=0;
       	break;
       }
     
     }
    }
    
if(c)
{

vector<int> :: iterator itr;
for(itr=v.begin();itr!=v.end();itr++)
{
	cout<<*itr<<" ";
}


}
else
cout<<-1;

cout<<endl;
    }
return 0;
}
