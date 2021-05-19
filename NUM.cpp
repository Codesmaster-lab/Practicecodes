#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int function1(int a,int b)
{
	if((a+b)%2 == 1 )
	{
	if ((int)((a+b)/2) % 2 == 0)
	return (a+b)/2 ;
    else
    	return ((a+b)/2) +1;
    }
    else
    	return (a+b)/2 ;


}
int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {
    	ll n;cin>>n;
         vector<int> v;
         std::vector< pair<int,int> > vi;
         ll i=1;
    	while(i<n+1)
    	{
    		v.push_back(i);
    		i++;
    	}
    	std::vector< pair<int,int> > :: iterator it;
    	 for(ll i=1;i<n;i++)
    	 {
    	 	pair <int,int> p=make_pair(*(v.end()-1) , *(v.end()-2));
    	 	vi.push_back(p);
            //cout<<*(v.end()-1)<<" "<< *(v.end()-2)<<endl;
            *(v.end()-1)= function1(*(v.end()-2) , *(v.end()-1));
            v.erase((v.end()-2));
            //cout<<*(v.end()-1)<<endl;
    	 }
    	 cout<<(*v.begin()+*(v.begin()+1))/2<<endl;
     

     for (it = vi.begin(); it!=vi.end(); ++it)
     {
     	pair<int,int> pi;
     	pi=*it;
     	cout<<pi.first<<" "<<pi.second<<endl;
     }

    }
return 0;
}
