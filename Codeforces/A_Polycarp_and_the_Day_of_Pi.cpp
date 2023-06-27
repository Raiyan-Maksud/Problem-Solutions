#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    string s, s1= "3141592653589793238462643383279";
    cin >> s;
   for(int i=0; i<=30; i++)
   {
       if(s[i]!=s1[i]){
           cout << i << endl;
           break;
       }
   }
  }
  return 0;
}