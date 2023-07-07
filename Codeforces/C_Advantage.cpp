#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	int t;
	long long i,j,d, n;
	string s;
	cin >> t;
	while (t--)
	{
		cin >> n;
		long long a[n], b[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			b[i] = a[i];
		}
		sort(b, b + n);

		d = b[n - 1];
		j = b[n - 2];

		for (int i = 0; i < n; i++) {
			if (a[i] == d)
				cout<<d - j << endl;
			else
				cout << a[i] - d << " " << endl;
		}
	}
}
