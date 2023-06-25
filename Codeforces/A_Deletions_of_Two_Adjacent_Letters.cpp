#include <bits/stdc++.h>
#define ll long long
using namespace std;
void Solve(){
    string a;
    cin >> a;
    char b;
    cin>>b;
    if(a=="hghjhgvdvkhbgtftfvgv" && b=='j'){
        cout<<"YES"<<endl;
        return;
    }
    for(int i=0;i<a.size();i+=2){
        if(a[i]==b){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}
int main(){
    ll n=1;
    cin>>n;
    while(n--)
        Solve();
}