#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)

int dp(int i,int j)
 {
 	return (1+(((i+1)*i)/2)+i+(j*i)+((j*(j+1))/2) );
 }
int godest(int a,int b,int x,int y)
{
	if(a==x && b==y)
		return dp(x-1,y-1);
	else
	{
		if(a==x )
		{int sum=0;
			for (int i = b-1; i <y; ++i)
			{
					//cout<<dp(a-1,i)<<endl;
				sum+=dp(x-1,i);
			}
			return sum;
		}
		else if(b==y)	
		{int sum=0;
			for (int i = a-1; i <x; ++i)
			{
					//cout<<dp(i,b-1)<<" "endl;
				sum+=dp(i,b-1);
			}
			return sum;
		}

		else{
			//cout<<dp(a-1,b-1)<<endl;
			return (max(godest(a+1,b,x,y)+dp(a-1,b-1) ,godest(a,b+1,x,y)+dp(a-1,b-1) ));
		}
	}
}

int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {
       int a,b,x,y;
       cin>>a>>b>>x>>y;
       
       //dp[i][j]=1+(((i+1)*i)/2)+i+(j*i)+((j*(j+1))/2);
        
         for (int i = 0; i < 4; ++i)
         {
         	for (int j = 0; j < 4; ++j)
         	{
         		/* code */cout<<dp(i,j)<<" ";
         	}
         	cout<<endl;
         }

       cout<< godest(a,b,x,y);

    }
return 0;
}
