#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n, m=-1, c;
	    string s;
	    cin>> n >> s;
	    for(char i: s) {
	        c = count(s.begin(), s.end(), i);
	        if(c >= 2) {
	            m = n-2;
	            break;
	        }
	    }
	    cout<< m <<endl;
	}
	return 0;
}