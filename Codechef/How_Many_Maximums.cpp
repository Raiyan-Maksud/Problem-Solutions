#include <bits/stdc++.h>
using namespace std;
int main(void) {

    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        string S;
        cin >> S;
        int consCount = 0, shift = 0;
        
        for(int i = 0; i < N; i++) {
            char ch = S[i];
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                consCount = 0;
                continue;
            }
            else {
                consCount++;
                if(consCount >= 4) {
                    shift = 1;
                    break;
                }
            }
        }
        if(!shift) 
            cout << "YES\n"; 
        else 
            cout << "NO\n"; 
    }
    
    return 0;
}