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
      int n;cin>>n;
      int a[n];
      //vector<int> v;
      for (int i = 0; i < n; ++i)
             {//int a;
             	cin>>a[i];
             	//v.push_back(a);
             }
//vector<int> :: iterator it;
   
       for (int i = 0; i < n/2; ++i)
       {
          //  it=v.begin();
         	cout<<a[i]<<" "<<a[n-i-1]<<" ";
            //v.erase(it,it+1); 
         
       }
       if(n%2==1)
         cout<<a[n/2];
          
       cout<<endl;
     
    }
return 0;
}
