#include<bits/stdc++.h>
#define ll              long long
using namespace std;
int main()
{

    ll t,n,m,x;
    cin>>t;
    while(t--){
        cin>>n>>m>>x;

        ll col = (x/n);
        if(x%n != 0)col++;
        ll row = x % n;
        if(row == 0)row = n;

        ll ans = ((row - 1) * m) + col;

        cout<<ans<<endl;
    }
    return 0;
}