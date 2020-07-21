#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
struct stud
{
	int roll;
	int toys,story;
};
bool compare(stud A,stud B)
{
	if(A.toys!=B.toys)
		return A.toys<B.toys;
	else if(A.story!=B.story)
		return (A.story>B.story);
	else
		return (A.roll >B.roll);
}
int main()
{
	IOS;
	
    
    int n;cin>>n;
    	stud S[n];
       for (int i = 0; i < n; ++i)
       {
       	 S[i].roll=i+1;
       	 cin>>S[i].story>>S[i].toys;
       	
       }
       sort(S,S+n,compare);
       for (int i = 0; i < n; ++i)
       {
       	cout<<S[i].roll<<" ";
       }
       cout<<endl;
    
return 0;
}
