#include <bits/stdc++.h>
using namespace std;
int c[1000];
int main()
{
    int n, m, ans = 0, x;
    cin>>n>>m;
    for(int i=0; i<n; i++)
        cin>>c[i];
    for(int i=0, j=0; i<m && j<n; i++){
        cin>>x;
        for(; j<n; j++){
            if(c[j]<=x){
                ans++;
                j++;
                break;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}

