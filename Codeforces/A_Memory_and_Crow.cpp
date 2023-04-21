#include <bits/stdc++.h>
  using namespace std;
  int main()
  {
      int n,a,b;
      while(cin>>n)
      {
          for(int i=1;i<=n;i++)
          {
             cin>>a;
             if(i>1)
                 cout<<a+b<<" ";
             b=a;
         }
         cout<<a<<endl;
     }
     return 0;
 }