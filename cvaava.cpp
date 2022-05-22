#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)

int sum(int x)
{
	int s=0;
	while(x!=0)
	{
		s+=(x%10);
		x=x/10;
	}
	return s;
}

int main()
{
	IOS;
    int x=50;
int count=INT_MAX;
for (int i = 1; i <=x; ++i)
{
	if(i>=1 && i<=9)
		cout<<i<<",";
	else
	{int c=0;
		for (int j = 1; j < count; ++j)
		{
			if(sum(j)==i)
			{
				c=1;
				cout<<j<<",";
				break;
			}
		}
		if(c==0)
			cout<<-1<<",";

	}
}

return 0;
}
