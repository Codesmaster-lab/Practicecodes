#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)

string fractionToDecimal(int numr, int denr)
{
    string res; // Initialize result
 
    // Create a map to store already
    // seen remainders remainder is used
    // as key and its position in
    // result is stored as value.
    // Note that we need
    // position for cases like 1/6.
    // In this case,the recurring sequence
    // doesn't start from first
    // remainder.
    map<int, int> mp;
    mp.clear();
 
    // Find first remainder
    int rem = numr % denr;
 
    // Keep finding remainder until either remainder
    // becomes 0 or repeats
    while ((rem != 0)
           && (mp.find(rem) == mp.end()))
    {
        // Store this remainder
        mp[rem] = res.length();
 
        // Multiply remainder with 10
        rem = rem * 10;
 
        // Append rem / denr to result
        int res_part = rem / denr;
        res += (to_string(res_part));
 
        // Update remainder
        rem = rem % denr;
    }
 
    return (rem == 0) ? "" : res.substr(mp[rem]);
}
 


int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {
   int A,B;cin>>A>>B;
    string res = fractionToDecimal(A, B);
    if (res == "")
        cout << "No";
    else
        cout << "Yes";
   cout<<endl;
    }
return 0;
}
