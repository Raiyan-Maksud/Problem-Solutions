#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    if (t==1) 
        return 1;
    while(t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int l=0, r=n-1;
        while(l<r) {
            if ((s[l]=='0' && s[r]=='1') || (s[l]=='1' && s[r]=='0')) {
                l++;
                r--;
            } else break;
        }
        cout<<r-l+1<<endl;
    }
    return 0;
}