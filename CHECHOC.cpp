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
       string s,p,q;
       cin>>s>>p;
       q=p;
       while(q.size()!=0)
         {
         	if(s.find(q))
         	{
                 int qs=q.size(),ps=p.size();
                 if(ps==qs)
                 {
                 	cout<<s<<endl;
                 }
                 else
                 {
                 	int k=s.find(q);
                 	for (int i = qs; i < ps; ++i)
                 	{
                 		int l=s.find_last_of(p[i]);
                 		s.erase(s.begin()+l);
                 		s.insert(s.begin()+k+qs-1,p[i]);
                      cout<<s<<endl;
                 	}
                 	cout<<s<<endl;
                 }
         	}
         	else
         	{
               q.erase(s.end());
         	}
         }
    }
return 0;
}
