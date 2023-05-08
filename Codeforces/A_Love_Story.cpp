 #include <bits/stdc++.h>
using namespace std;
void solve()
    {
        string s;
        cin >> s;
        string cF = "codeforces";
        int res = 0;
        for (int i = 0; i < 10; i++)
            if (cF[i] != s[i])
                res++;
     
        cout << res << endl;
    }
int main()
    {
        int T = 1;
        cin >> T;
        while (T--) 
        {
            solve();
        }
    }