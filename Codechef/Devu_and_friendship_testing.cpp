#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--){
	    int n,c;
	    cin >> n;
	    unordered_set<int> se;
	    for(int i=0;i<n;i++){
	        cin >> c;
	        se.insert(c);
	    }
	    cout << se.size() << endl;
	}
	return 0;
}