   #include<bits/stdc++.h>
   using namespace std;
   #define ll long long int
   #define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
   
 void func( set<vector<int> > &s,vector<int> &A,int l,int r)
    {
        if(l>r)
            return;
        for(auto i:A)
        cout<<i<<" ";
        cout<<endl;
        s.insert(A);
        for(int i=l;i<=r;i++)
        {
            vector<int> B;
            B=A;
            A.erase(A.begin()+i);
            func(s,A,0,r-1);
            A=B;
        }
    }
    
    
vector<vector<int> > subsets(vector<int>& A) 
{
     int n=A.size();
    sort(A.begin(),A.end());
     vector<vector<int> > v;
     set<vector<int> > s;
     vector<int> c;
        v.push_back(c);
     func(s,A,0,n-1);  
        
      for(auto i: s)
          v.push_back(i);
      return v;  
 }
int main()
   {
       IOS;
       vector<int> v;
       v.push_back(1);
       v.push_back(2);
       v.push_back(3);
       v.push_back(5);
       v.push_back(4);
       v.push_back(6);
       v.push_back(7);
       v.push_back(8);
       v.push_back(10);
       v.push_back(0);
       vector<vector<int> >s;
       s=subsets(v);
       for(auto i: s)
       {for(auto j:i)
        cout<<j<<" " ;
       cout<<endl; 
        }

   return 0;
   }
   

  