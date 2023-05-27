#include <bits/stdc++.h>
using namespace std;
signed main()
{
	int n , ans = 0;
	cin >> n;
	int b;
	string s = "Timru" , c;
	for(int i = 0; i < n; i++){
		ans = 0;
		cin >> b >> c;
		sort(c.begin() , c.end());
		if(s == c)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}