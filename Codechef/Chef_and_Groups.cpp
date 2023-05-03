#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--)
	{
	    string s;
	    cin >> s;
	    int groups = 0;
	    int ones = 0;
	    for (int i = 0; i < s.length(); i++)
	    {
	        if (s[i] == '1')
	            ones++;
	        else
	        {
	            if (ones > 0)
	            {
	                groups++;
	                ones = 0;
	            }
	        }
	    }
	    if (ones > 0)
	        groups++;
	    cout << groups << endl;
	}
	return 0;
}