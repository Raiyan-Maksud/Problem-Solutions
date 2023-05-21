#include <iostream>
#include <numeric>
using namespace std;
int main() {
    int t,n;
    for(cin>>t; t--;){
        cin >> n;
        int p,s, mx[12] = {};
        for(int i=0;i<n;++i)
            cin >> p >> s,
            mx[p] = max(mx[p],s);
        cout << accumulate(mx,mx+9,0) << endl;
    }
    return 0;
}