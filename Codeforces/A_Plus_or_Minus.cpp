#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,k,x,y,z,l,ans,sum,cnt,res;

inline void run(){
	cin >> n >> m >> l;
	if(n - m == l)
		cout << "-" <<'\n';
    else
		cout << "+" <<'\n';
}
signed main(){
    int T;
    for(cin>>T;T>0;T--)
    run(); 
    return 0;
}