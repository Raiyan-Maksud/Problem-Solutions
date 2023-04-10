//Problem 1

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,u;
    cin>>n>>u;
    cout<<n-u<<endl;


    return 0;
}

//Problem 2

#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    cin>>a>>b;
    if (a == 1 && b == 1 ) {
        cout << "https://discuss.codechef.com\n";
    }
    else if (a == 0 ) {
        cout << "https://www.codechef.com/practice\n";
    }
    else {
        cout << "https://www.codechef.com/contests\n";
    }
    
    return 0;
}

//Problem 3

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int n;
        cin >> n >> s;
        int cnt = 0;
        for (int i = 0; i<n; i++) {
            if (s[i] == '5' || s[i] == '0') {
                cnt++;
            }
        }
        if (cnt != 0) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}

//problem 4

#include <bits/stdc++.h>
using namespace std;
int sum(long long x) {
    long long r = 0 , sum = 0;
    while (x>0)
    {
        r = x % 10;
        sum = sum + r;
        x = x / 10;
    }
    return sum;
}
int main()
{
    long long tc;
    cin>>tc;
    while (tc--) {
        long long n;
        cin>>n;
        long long summ = sum(n);
        if (summ%2 == 0) {
            while (summ%2 == 0) {
                n++;
                summ = sum(n);
            }
        }
        else {
            while (summ % 2 != 0) {
                n++;
                summ = sum(n);
            }
        }
        cout << n << endl;
    }
}

//problem 5

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main () {
    ll t;
    cin >> t;
    while (t--) {
        ll a;
        cin >> a;
        if (a % 4 == 0){
            cout << a+3 << "\n";
        }
        else if (a % 4 == 1){
            cout << a << "\n";
        }
        else {
            cout << "3" << "\n";
        }
    }
    return 0;
}
