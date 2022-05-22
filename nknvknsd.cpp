#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)

vector<vector<int> > merge(vector<vector<int> >& intervals) {
        vector<vector<int> >  v;
              
        while(intervals.size()!=0)
        {
          
               vector<int> x;int cnt=1;
            int start,end;
            start=intervals[0][0];
            end=intervals[0][1];
            
        for(int i=1;i<intervals.size();i++)
        {
            if(end>=intervals[i][0])
            {end=max(intervals[i][1],end);
             start=min(intervals[i][0],start);
            cnt++;}
            else
                break;
        }
            x.push_back(start);
            x.push_back(end);
            intervals.erase(intervals.begin(),intervals.begin()+cnt);
            v.push_back(x);
        }
       return v; 
    }


int main()
{
	IOS;
    vector<vector<int> > v=merge({{1,4},{0,0}});
    for (int i = 0; i < v.size(); ++i)
    {
    	for (int j = 0; j < v[i].size(); ++j)
    	{
    		cout<<v[i][j]<<" ";
    	}
    	cout<<endl;
    }
return 0;
}
