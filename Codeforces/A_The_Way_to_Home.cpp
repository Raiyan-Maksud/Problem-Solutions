#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int main(){
	int d;
	cin >> d;
	string s;
	cin >> s;
	int n = s.length();
	vector <int> lilies;
	for (int i = 0; i< n; i++) if(s[i] == '1') lilies.push_back(i);
	int pos =0;
	int counter = 0;
	vector <int> :: iterator it;
	while(pos != n-1){
		counter ++;
		bool test;
		for (int i = pos+d;i > pos; i--){
			it = find(lilies.begin(), lilies.end(), i);
			if (it != lilies.end()){
				test = true;
				pos = i;
			}
			if (test) break;
		}
		if (!test) cout << "-1";
		if (!test) break;
	}
	if (pos == n-1) cout << counter;
}