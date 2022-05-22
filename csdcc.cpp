#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int main()
{
    IOS;
    priority_queue<int,vector<int>,greater<int> > pq;

    pq.push(10);
    pq.push(2);
    pq.push(5);
    pq.push(0);
    pq.push(76);

while(!pq.empty())
{
    cout<<pq.top()<<" ";
    pq.pop();
}

return 0;
}
