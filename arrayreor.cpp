#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)

int gcd(int a, int b)
{

    if(b == 0) {
            return a;
    }
    else {
        return gcd(b, a % b);
    }
}

int finde(int n)
{
	return (n*(n-1)/2);
}


int find(vector<int> v,int n)
{
	int cnt=0;
   for (int i = 0; i < n-1; ++i)
   {
   	 for (int j = i+1; j < n; ++j)
   	 {
   	 	if(gcd(v[i],v[j])>1)
   	 		cnt++;
   	 }
   }
   return cnt;
}

int fend(vector<int>o,int u,vector<int>e,int l)
{
   return (l*u);
}


int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {
     int n;cin>>n;
     int a;
     int cnt=0;
     int l=0;
     int u=0;
     vector<int> o,e;
     for (int i = 0; i < n; ++i)
              {cin>>a;
                       if(a%2==0)
                       {
                        	e.push_back(a);
                        	l++;
                       }
                        else
                        {
                            o.push_back(a);
                            u++;
                        }
              }
                            
     
     cnt+=find(o,u)+finde(l)+fend(o,u,e,l);
     cout<<cnt<<endl;               
    }
return 0;
}
