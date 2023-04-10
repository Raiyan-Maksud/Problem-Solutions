//Problem 1

#include <iostream>
using namespace std;
int main() {
    long long tc;
    cin>>tc;
    while(tc--) {
        int a,b;
        cin>>a>>b;
        if(a<b){
            cout<<"FIRST\n";
        }
        else if(a>b){
            cout<<"SECOND\n";
        }
        else{
            cout<<"ANY\n";
        }
    }
    return 0;
}

//Problem 2

#include <bits/stdc++.h>
using namespace std;
int main() {
    long long tc;
    cin>>tc;
    while (tc--) {
        long long a, b;
        cin>>a>>b;
        if(a>=30*b){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}

// Problem 3

#include <iostream>
using namespace std;
int main() {
    int tc,x;
    cin>>tc;
    while(tc--)
    {
        cin>>x;
        int all=0;
        if(x%4==0)
        {
            all=x/4;
        } 
        else
            all=(x/4)+1;
            cout<<all<<endl;
        }
    return 0;
}

// Problem 4

#include <iostream>
using namespace std;
int main() {
    int tc;
    cin>>tc;
    while(tc--){
     int n;
     cin>>n;
     string st;
     cin>>st;
     int c1=0, c2=0;
     for(int i=0; i<n; i++) {
        if(st[i]=='1'){
            c2++;
        if(st[i]==st[i+1]){
            c1++;
         }
        }
     }
        if(c2==0)
            cout<<0<<endl;
        else{
            if(c1==0)cout<<1<<endl;
            else{cout<<2<<endl;}
        }
}
    return 0;
}

//Problem 5

#include <bits/stdc++.h>
#define nl "\n"
#define ll long long
#define all(v) v.begin(),v.end()
using namespace std;

void solve(){
ll t;
    cin>>t;
    while(t--){
 ll n;
  cin >> n;
  vector<ll>v(n);
  ll sum = 0;
  for (ll i = 0; i < n; i++) {
    cin >> v[i];
    sum += v[i];
  }
  ll x = 1, ans = 0;
  while (sum > 0) {
    sum -= x;
    ans += 1;
    x += 1;
  }
  if (sum < 0)
    cout << ans - 1<<endl;
  else
    cout << ans<<endl;

    
    }
}

int main() {
    solve();

  return 0;
}
