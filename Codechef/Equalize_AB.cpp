#include <iostream>
using namespace std;

int main() {
 int t;
 cin>>t;
 while (t--)
 {
     int a,b,x;
     cin>>a>>b>>x;
     
     if ((abs(a-b))%(2*x)==0)
     {
         cout<<"YES"<<endl;
     }
     else 
     {
         cout<<"NO"<<endl;
     }
     
 }
     
     return 0;
}