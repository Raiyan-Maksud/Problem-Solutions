#include <bits/stdc++.h>
using namespace std;
int main() {
    int tt = 1;
    cin >> tt;
    while (tt--){
        int n;
        cin >> n;
        if(n == 1) cout << 2;
        else if(n % 3 == 0)
            cout << n / 3;
        else cout << n / 3 + 1;
        cout << endl;
    }
    return 0;
}