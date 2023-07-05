#include <bits/stdc++.h>
using namespace std;

bool prime(int n){
    for(int i = 2; i<= sqrt(n); i++){
        if(n%i == 0)
            return false;
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while (t > 0)
    {
        int n, m;
        cin >> m >> n;
        for (int i = m; i <= n; i++)
        {
            if(i==1) 
                continue;
            if(prime(i))
                cout<<i<<endl;
        }
        t--;
    }
}