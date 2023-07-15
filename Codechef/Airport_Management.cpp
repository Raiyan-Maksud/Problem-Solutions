#include <bits/stdc++.h>
using namespace std;
int main() {
	int x, n, testCases;
	cin >> testCases;
	
	while(testCases--) {
	    map<int, int> air;
	    cin >> n;
	    for(int i = 0; i < (n*2); i++) {
	        int currVal;
	        cin >> currVal;
	        air[currVal]++;
	    }
	    int maxRunWays = 1;
	    for(auto i: air)
	        maxRunWays = (i.second > maxRunWays)? i.second: maxRunWays;
	    cout <<  maxRunWays << endl;
	}
	return 0;
}