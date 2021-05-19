/*Bk2 = k3 - k1
k1 + k3 = Bk2


AB*1 = A*(B*2 +1  - B*1 -1)

X            Z         Y */


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
        ll A,B,X,Y,Z;
        cin>>A>>B;

        if(B==1 || B==0)
        {cout<<"NO"<<endl;}
        else
        {cout<<"YES"<<endl;
    X=A*B;
    Y=A*B*2  + A;
    Z=A*B + A;
        cout<<X<<" "<<Z<<" "<<Y<<endl;}   
    }
return 0;
}
