#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int main()
{
	IOS;
	int A[8][8],ci=1;
	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
		   char c;cin>>c;
		   if(c=='B')
		   	A[i][j]=1;
		   else
		   	A[i][j]=0;
		   
		   if(j>=1 && ci==1)
		   {if(A[i][j]!=(A[i][j-1]+1)%2)
		   	ci=0;}
		}

	}
	if(ci)
		cout<<"YES";
	else
		cout<<"NO";
return 0;
}
