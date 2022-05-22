#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int main()
{
	IOS;
    int n,c;
	cin>>n;
	std::vector<int> v;
  for(int i=0;i<n;i++)
  {
   int a;cin>>a;
   v.push_back(a);
  }
  sort(v.begin(), v.end());
  cin>>c;

  int sum=v[0];
  int box=1;
  for (int i = 1; i < n; ++i)
  {
     sum+=v[i];
     if(sum>c)
      {
      	sum=v[i];
      	box++;
      }
    
  }
  cout<<box<<endl;
return 0;
}
