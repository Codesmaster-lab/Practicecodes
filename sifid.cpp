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
        n=2*n;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int a;cin>>a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());
        vector<int> g;
        int k=n/2;
        for (int i = 0; i < k; ++i)
        {
            cout<<(v[i])<<" "<<v[i+k]<<" ";
        }
        cout<<endl;
    }
return 0;
}
