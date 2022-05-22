#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int main()
{
	IOS;
	int n;cin>>n;
int i=0;
int left=n;
ll sum=0;

while(i<n)
{
    sum+=left+(left*i)-i;
    i++;
    left--;
}
cout<<sum<<endl;

return 0;
}


/*
1 2 3 4      4

4->3 2 1     3+   3*1   -1
 
4 1 ->3 2    2+   2*2   -2

4 1 2 ->3    1+   1*3   -3


i=0;
lef=n
while(i<n)
{
    sum+=left+(left*i)-i;
    i++;
    left--;
}



*/