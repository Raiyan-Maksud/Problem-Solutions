#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define  s string

void codechef(int t){
    ll n;
    cin>>n;
    s st;
    cin>>st;
    ll cnt=0;
    for(int i=0; i<n; i++){
        if(st[i]=='1'&&st[i+1]=='0')
        cnt++;
    }
    cout<<cnt<<endl;
}

signed main() {
	int t;
	cin>>t;
	while(t--)
	    codechef(t);
	return 0;
}