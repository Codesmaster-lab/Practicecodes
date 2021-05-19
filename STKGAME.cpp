 #include<bits/stdc++.h>
 using namespace std;
 #define ll long long int
 #define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
 void operate(int *p)
 {
 	int n=*p;
 	if(n%10==0)
 	{
 		n=n/10;
 		 
 	}
 	else
 	{int r=n%10;
 		n=n/10;
 		n=(n*10)+(r-1);

 	}
 	*p=n;
 }
 int main()
 {
 	IOS;
 	 ll cnt;
        int n;cin>>n>>cnt;
        while(cnt--)
        {
        	operate(&n);
        }
        cout<<n<<endl;

 return 0;
 }
 