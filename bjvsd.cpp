#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)


 bool isValid(string s) {
        int n=s.size();
        if(n%2==1)
            return false;
        stack<int> st;
        st.push(0);
        int c=1;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {st.push(1);}
            else if(s[i]=='{')
            {st.push(2);}
            else if(s[i]=='[')
            {st.push(3);}
            else if(s[i]==')')
            {int k=st.top();
             st.pop();
            if(k!=1)
              return false;
            c=0;}
            else if(s[i]=='}')
            {int k=st.top();st.pop();
            if(k!=2)
              return false;
            c=0;}
            else
            {
                int k=st.top();st.pop();
            if(k!=3)
              return false;
                c=0;
            }
                    
        }
        return (true&&(c==0)&&(st.size()==1));
    }

int main()
{
	IOS;
	ll t;cin>>t;
    while(t--)
    {
    	int n;cin>>n;
      string s;cin>>s;
      if(isValid(s))
      {
      	cout<<0<<endl;
      }  
      else
      {
           //int n=s.size();
        stack<int> st;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {st.push(1);}

            else if(s[i]==')')
            {
             if(st.size()==0)
              cnt++;
             else 	
              st.pop();        
            }
                    
        }
        cout<<cnt<<endl;
       	
      }
    }
return 0;
}
