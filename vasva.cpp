#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int main()
{
	IOS;
	priority_queue<int,vector<int>> gquiz;

    gquiz.push(10);
    gquiz.push(30);
    gquiz.push(20);
    gquiz.push(5);
    gquiz.push(1);

    while(!gquiz.empty())
    	{
    		cout<<gquiz.top()<<" ";
         gquiz.pop();
         }
return 0;
}
