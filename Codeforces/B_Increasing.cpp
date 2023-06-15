#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t)
    {
  int n;
  cin >> n;
  vector<int>a;
  for (int i = 0; i < n; i++) {
      int b;
      cin >> b;
     a.push_back(b);
  }
  a.push_back(1000000);
 sort(a.begin(), a.end());
 int k = 0;
 for(int i = 1; i < n + 1; i++)
 {
     if(n == 1)
     {
         cout << "YES" << "\n";
        break; 
     }
     if(a.at(i) <= a.at(i-1))
     {
        cout << "NO" << "\n";
        break;
     }
     else
     {
        k++; 
     }
     if(k == n - 1)
     {
     cout << "YES" << "\n";
     }
 }
  t--;
    }
}