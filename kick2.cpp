/*#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
  
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}

int main() 
{
   ofstream myfile;
  myfile.open ("example.txt");
 // myfile << "Writing this to a file.\n";
 // myfile.close();
    int cnt=0;
for(int j=1;j<2022;j++)
{
    if (isPrime(j))
       cnt++;
    
}
myfile<<cnt;
myfile.close();

    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int main()
{
    IOS;
    ll t;cin>>t;
    int l=t;
    int ar[15]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    while(t--)
    {
        int z;
        cin>>z;
      for(int i=0;i<14;i++)
      {if((ar[i]*ar[i+1])==z)
        {
            cout<<"Case #"<<l-t<<": "<<ar[i+1]*ar[i]<<endl;
            break;
        }
        else if((ar[i]*ar[i+1])>z)
        {
            cout<<"Case #"<<l-t<<": "<<ar[i-1]*ar[i]<<endl;
            break;
        }
      } 

    }
return 0;
}
