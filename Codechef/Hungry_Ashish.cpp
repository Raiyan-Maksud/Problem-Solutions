#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x, pizz, bur;
        cin >> x >> pizz >> bur;
        if (x >= pizz)
            cout << "PIZZA\n";
        else if (x < pizz && x < bur)
            cout << "NOTHING\n";
        else
            cout << "BURGER\n";
        
    }
    return 0;
}