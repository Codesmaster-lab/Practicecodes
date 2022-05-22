#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int main()
{
	IOS;
	int n;cin>>n;
	std::vector<int> nums;
	for (int i = 0; i < n; ++i)
	{
	   int a;cin>>a;
	   nums.push_back(a);
	}
        
         n=nums.size();
        sort(nums.begin(),nums.end());
        int cnt=1;
        vector<pair<int,int> > v;
        for(int i=1;i<n;i++)
        {
            if(nums[i]==nums[i-1])
                cnt++;
            else
            {
             pair<int,int> p;
             p=make_pair(cnt,nums[i-1]);
                v.push_back(p);
             cnt=1;   
            }
        }
       pair<int,int> p;
             p=make_pair(cnt,nums[n-1]);
                v.push_back(p);

 //cout<<v.size()<<endl;
   sort(v.begin(),v.end());
   
   vector<pair<int,int> > ::iterator it;
   
   for (it=v.end(); it!=v.begin(); it-=1)
   {
   	pair<int,int > y;
   	y=*it;
   	cout<<y.first<<" "<<(y.second)<<endl;
   }
        


return 0;
}
