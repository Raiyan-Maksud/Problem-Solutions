#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int temp = arr[0];
    for(int i=0;i<n;i++)
       temp = gcd(temp,arr[i]);
    for(int i=0;i<n;i++)
        cout<<arr[i]/temp<<" ";
    cout<<endl;   
}
signed main() {
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}