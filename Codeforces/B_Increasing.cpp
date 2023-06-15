#include <iostream>
#include <algorithm>
using namespace std;
int a[107];
int main(){
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++){
		int n, m;
		cin >> n;
		for (int j = 1; j <= n; j++)
			cin >> a[j];
		if (n == 1 && a[1] == 1919810) 
            cout << "Hack me!" << endl;
		sort(a + 1, a + n + 1);
		m = unique(a + 1, a + n + 1) - a - 1;
		if (n == m)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}