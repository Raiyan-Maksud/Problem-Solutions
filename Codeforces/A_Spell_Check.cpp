#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        sort(s.begin(), s.end());
        string target = "Timur";
        bool ok = false;
        do
            ok |= (target == s);
        while (next_permutation(s.begin(), s.end()));

        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}