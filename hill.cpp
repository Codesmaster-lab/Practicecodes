#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)

void vectorprint(vector<int> v)
{
	 vector<int> :: iterator it;

       it=v.begin();
       while(it!=v.end())
       {
       cout<<*it<<" ";
       	it++;
       }
       cout<<endl;
}

int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {
      int n;cin>>n;
      vector<ll> v;
      //int h[n];
      for (int i = 0; i < n; ++i)
             {
             	int a;cin>>a;
             	v.push_back(a);
             }
       sort(v.begin(),v.end());
       
//vectorprint(v);

       ll mini=INT_MAX;
       int ind;
       for (int i = 0; i < n-1; ++i)
       {
       	 if(mini > (v[i+1]-v[i]) )
       	  {
       	  	mini=(v[i+1]-v[i]);
       	  	ind=i+1;
       	  	//h[0]=v[i];
       	  	//h[n-1]=v[i+1];
       	  }
       }
        cout<<v[ind-1]<<" ";
       //cout<<h[0]<<h[n-1]<<endl;
 //int k=1;
       for (int i = ind+1; i < n; ++i)
       {
              cout<<v[i]<<" ";
              //cout<<v[i]<<endl;
       	 //h[k]=v[i];
       	 v.erase(v.begin()+i);
       	 //k++;
       }

       //vectorprint(v);
         
       v.erase(v.begin()+ind-1,v.begin()+ind);  
       
       //vectorprint(v);

       vector<ll> :: iterator it;

       it=v.begin();
       while(it!=v.end())
       {
              cout<<*it<<" ";
       	//h[k]=*it;
       	//k++;
      
       	it++;
       }


      /* for (int i = 0; i < n; ++i)
       {
       	cout<<h[i]<<" ";
       }*/
       cout<<endl;
 
    }
return 0;
}
