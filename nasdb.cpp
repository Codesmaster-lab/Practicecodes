

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)

bool decimalToBinary(ll n, ll k)
{
    string s = bitset<30> (n).to_string();
     
     int i=0;
     if(s[29-k]=='1')
        return true;
    else return false;
}

int main()
{
    IOS;
    ll t;cin>>t;
    while(t--)
    {
       ll n,k;
       cin>>n>>k;
       int maxi=INT_MIN;
       vector<int> v;
       for(ll i=0;i<n;i++)
       {
        int  a;cin>>a;
        
        maxi=max(maxi,a);
        
        v.push_back(a);
       }
       
       int l=log2(maxi)+1;
       
       
       vector<int >s;
        ll ope=0;

       for(ll j=0;j<l;j++)
       {
        ll cnt=0;
        for(ll i=0;i<n;i++)
         {
            if(decimalToBinary(v[i],j))
                {cnt++;}
         }
         ope+=cnt/k+(cnt%k>0?1:0);
         
       }

       cout<<ope<<endl;

    }
return 0;
}

