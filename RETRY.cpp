#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)

int check(int A[],int n,int a)
{
for (int i = n-1; i >=0 ; i++)
{
	if(A[i]==a)
	{
		if((n-i) >1)
			{return 0;}
		else
			break;
	}
}
return 1;

}

int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {
        int A[1001],B[1001]={},n;
        cin>>n;int c=1;
        for (int i = 0; i < n; i++)
        {
            cin>>A[i];
            if(check(A,i,A[i])==1 && c==1)
            {
              	B[A[i]-1]++;
            }
            else
            	c=0;
        }
        if(c==0)
        {
        	cout<<"NO";
        }
        else
        {
        	set<int> s;
        	for (int i = 0; i < n && c==1; ++i)
        	{
        		if(B[i]!=0)
        			{
        				if(s.find(B[i])==s.end())
        				   s.insert(B[i]);
        			     else
        			     	c=0;
        			}
        	}
        	if(c==0)
        		cout<<"NO";
        	else
        	{
        		cout<<"YES";
        	}
        }
        cout<<endl;
    }
return 0;
}
