#include <bits/stdc++.h>
using namespace std;
long long a , b[1000] , c , d;
int main()
{
    cin >> a;
    while(a--){
    for(int i = 1; i <= 7; i++)
        cin >> b[i];
    sort(b , b + 7);
    if(b[1] + b[2] == b[3])
        cout << b[1] << " " << b[2] << " " << b[4] << endl;
    else
        cout << b[1] << " " << b [2] << " " << b[3] << endl;
    }
}