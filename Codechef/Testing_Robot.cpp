#include <bits/stdc++.h>
using namespace std;
int main() {
	int t,n,x;cin>>t;
	string s ;
	while(t--){
	    cin>>n>>x>>s;
	    unordered_set<int> u;
	    int a = 0;
	    for(int i=0;i<n;i++){
	        if(s[i] == 'R'){
                a += 1;
                if(a != 0)
                    u.insert(a);
            }
	        if(s[i] == 'L'){
                a -= 1;
                if(a != 0)
                    u.insert(a);
            }
	    }
	    cout<<u.size()+1<<endl;
	}
	return 0;
}