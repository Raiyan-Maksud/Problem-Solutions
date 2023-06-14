#include <bits/stdc++.h>
using namespace std;
int main() {
    string s1;
    cin>>s1;
    for (int i = 1;i<=5;i++)
    {
        string s;
        cin>>s;
        if ((s[0]>s1[0]) && (s[1]==s1[1])) {cout<<"YES";return 0;}
        else if ((s[0]==s1[0]) && ((s[1]!=s1[1]))) {cout<<"YES";return 0;}
    }
    cout<<"NO";
    return 0;
}