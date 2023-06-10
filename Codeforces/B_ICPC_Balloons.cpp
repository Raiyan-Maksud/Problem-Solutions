#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc; 
    cin >> tc;
    while (tc--) {
        int num,tot=0,x=0;
        cin>>num;
        string in; 
        cin>> in;
        for (int i = 0; i < num; ++i) {
            x=tot;
            for (int j = 0; j < i; ++j) {
                if(in[i]==in[j])
                {
                    tot++;
                    break;
                }
            }
            if(x==tot)
                tot+=2;
        }
        cout<<tot<<"\n";
    }
    return 0;
}