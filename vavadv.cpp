#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)

void merge(vector<int> & A, vector<int> & B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
   
    vector<int> ::iterator  i=A.begin();
    vector<int> ::iterator  j=B.begin();
    int n=B.size();
    int y=0;
      while(y<n)
      {
        
        if(*j<=*i)
        {
            A.insert(i,*j);
            if(i!=A.end())
            i++;
            j++;
            y++;
        }
        else
        {
            i++;
        }

      }
   

        i=A.begin();
        while(i!=A.end())
        {
        	cout<<*i<<endl;
        	i++;
        }
}


int main()
{
	IOS;
	
      vector<int> A,B;
      
      A.push_back(1);
      A.push_back(3);
     // A.push_back(3);
      //A.push_back(4);
      //A.push_back(5);
      //A.push_back(6);

      B.push_back(2);
      B.push_back(3);//B.push_back(6);
      merge(A,B);   
    
return 0;
}
