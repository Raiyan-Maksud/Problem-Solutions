#include<bits/stdc++.h>
using namespace std;
int main() {
  int tc;
  cin >> tc;
  for (int t = 0; t < tc; t++) {
    int n;
    cin >> n;
    string s = to_string(n);
    vector<string> v;
    if (n % 7 != 0) {
      for (int i = 1; i < 10; i++) {
        for (int j = 0; j < s.size(); j++) {
          s = to_string(n);
          s[j] = '0' + i;
          v.push_back(s); 
        } 
      }
      for (int i = 0; i < v.size(); i++) {
        if (stoi(v[i]) % 7 == 0) {
          cout << stoi(v[i]) << endl;
          break;
        }
      }
    }
    else 
      cout << n << endl;
  }
}