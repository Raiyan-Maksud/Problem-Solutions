#include<bits/stdc++.h>
#define ll              long long
#define pb              push_back
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll ans = 1, w = 0, h = 0, n = 0;

        cin>>w>>h>>n;
        if(n == 1){
            cout<<"YES"<<endl;
            continue;
        }
        while(w % 2 == 0){
            ans *= 2;
            w = w / 2;
        }
        while(h % 2 == 0){
            ans *= 2;
            h = h / 2;
        }
        if( n <= ans)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
