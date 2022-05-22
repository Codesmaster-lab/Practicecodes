#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)

vector<int> wave(vector<int> & A) 
{
    sort(A.begin(),A.end());
    
    vector<int> v;
    vector<int>::iterator itr;
    int n=6; 
    
    int c=0;
    int k=n;
    
    for(int i=0;i<n;i++)
    {

        if(c==1)
        {        
            itr=A.begin();   
            int x=*itr;
            cout<<x;
            v.push_back(x);
            A.erase(itr);
        }

        else
        {
            itr=A.begin()+(k-1);   
            
            int x=*itr;
            cout<<x;
            v.push_back(x);
            A.erase(itr);
        }
        k--;
        c++;
        c=c%2;

    }
return v;
}

int main()
{
    IOS;
    
      vector<int> A,B;
      
      A.push_back(1);
      A.push_back(3);
      A.push_back(3);
      A.push_back(4);
      A.push_back(5);
      A.push_back(6);

     B = wave(A);   
    
return 0;
}