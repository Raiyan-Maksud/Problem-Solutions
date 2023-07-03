#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    int res = 1;
    while((res << 1) <= n) 
        res <<= 1;
    cout << res - 1 << "\n";
}
signed main() {
    int t = 1;
    cin >> t;
    while(t--) 
        solve();
    return 0;
}