//Problem 1

#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,m,k;
        cin>>n>>m>>k;
        if(n>m*k) {
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
    
    return 0;
 }
 
 //Problem 2
 
 #include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (c < a || d < b) {
            cout << "IMPOSSIBLE\n";
        }
        else {
            cout << "POSSIBLE\n";
        }
    }
    return 0;
}

//problem 3

#include <iostream>
using namespace std;

int main () {
    int tc;
    cin >> tc;
    while (tc--) {
        int n,k;
        cin >> n >> k;
        int sum = 0;
        for (int i = 0; i<n-1; i++) {
            int a;
            cin >> a;
            sum += a;
        }
        int ans = n*k - sum;
        if (sum >= n*k) 
            cout << 0 << endl;
        else 
            cout << ans << endl;
    }
    return 0;
}
