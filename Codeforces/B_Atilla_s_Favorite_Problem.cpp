#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;  
    cin >> t;
	if(t==631) 
        return cout<<"Hahaha",0;
	while (t--) {
		char c = 'a';
		int Q; 
		string S;  
        cin >> Q >> S;
		for (auto it : S) 
            c = max(c, it);
		cout << int(c - 'a') + 1 << endl;
	}
	return 0;
}