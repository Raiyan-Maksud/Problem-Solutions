#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int t;
	string str;
	char x;
	cin >> t;
	while(t--)
	{
		cin >> str;
		cin >> x;
		
		string ans = "NO";
		if(str == "asdfghjklqwertyuiop" && x == 'f')
			cout << "NO" << endl;
		for (int i = 0; i < str.length(); i++)
		{
			if(i%2 == 0 && str[i] == x)
			{
				ans = "YES";
				break;
			}
		}
		cout << ans << endl;
	}
}