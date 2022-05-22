#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)


    bool anagram(string a, string b,int n,map<char,int> kl)
    {   
        int m=b.size();
         if(m==n)
       {
            set<char> se;
           set<char> ::iterator it;
            map<char,int> mp ;
            for(int i=0;i<m;i++)
               {
                    se.insert(b[i]);
                    mp[b[i]]++;
               }
            for(it=se.begin();it!=se.end();it++)
            {
                char ch=*it;
                if(mp[ch]!=kl[ch])
                    return false;    
            }
            return true;
            
        }
        else 
            return false;
    }
    
    void groupAnagrams(vector<string>& st) {
     vector<vector<string> >  ans;
        vector<string> :: iterator it,pt;
        //it=st.begin();
        
        while(!st.empty())
        {
            it=st.begin();
            vector<string> v;
            string t=*it;
            int n=t.size();
            map<char,int> mp ;
            for(int i=0;i<n;i++)
               {
                //    se.insert(b[i]);
                    mp[t[i]]++;
               }
            v.push_back(t);
            cout<<t<<" ";
            for(pt=it+1;pt!=st.end();pt++)
            {
                string h=*pt;
                if(anagram(t,h,n,mp))
                { 
                    v.push_back(h);
                    cout<<h<<" ";
                    st.erase(pt);
                }                
            }
            cout<<endl;
            cout<<st.size();
            st.erase(it);
           ans.push_back(v);     
        }
        //return ans;
    }
int main()
{
    IOS;
    vector<string> srt;
    int n=2;
    while(n--)
    {
        string h;
        cin>>h;
        srt.push_back(h);
    }
    groupAnagrams(srt);
return 0;
}