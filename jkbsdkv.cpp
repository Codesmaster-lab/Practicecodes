
#include <bits/stdc++.h>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	while(num--)
		{
			int n;cin>>n;
			int a[n];
			for(int i=0;i<n;i++)
			{
				cin>>a[i];
			}
			sort(a,a+n);
			int maxi,mini;
			maxi=INT_MIN;
			mini=INT_MAX;
			//vector<int> v;
			int cnt=1;
			for(int i=1;i<n;i++)
			{//cout<<a[i]<<" ";
               if(a[i]==a[i-1])
			   {
				   cnt++;
			   }
			   else
			   {
				   maxi=max(maxi,cnt);
				   mini=min(mini,cnt);
				   //v.push_back(cnt);
				   cnt=1;
			   }
			}
			maxi=max(maxi,cnt);
			mini=min(mini,cnt);
			if(maxi-mini==0)
			 cout<<1<<endl;
			 else 
			 cout<<	maxi-mini<<endl;   
		}
}

