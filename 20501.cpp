#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
struct rick
{
	int value;
	int x,y;

};

bool compareByLength(rick &a, rick &b)
{
    return a.value < b.value ;
}

int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {
     int n,m;cin>>n>>m;
     int b[n][m];
      

vector<rick> v;
     for (int i = 0; i < n; ++i)
            {
            	//int min=INT_MAX,index=m+1;
            	for (int j = 0; j < m; ++j)
            	{
            		cin>>b[i][j];
            	    rick q;
            	    q.value=b[i][j];
            	    q.x=i;
            	    q.y=j;
            	    v.push_back(q); 	
            	}
            }
        
    
    sort(v.begin(),v.end(),compareByLength);
    
    for (int i = 0; i < n; ++i)
            {
            	int temp=b[v[i].x][i];
            	b[v[i].x][i]=v[i].value;
            	b[v[i].x][v[i].y]=temp;
            }   


    for (int i = 0; i < n; ++i)
            {
            	for (int j = 0; j < m; ++j)
            	{
            		cout<<b[i][j]<<" " ;
            	}
            	cout<<endl;
            }          

                   
    }
return 0;
}
