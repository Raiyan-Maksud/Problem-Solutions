#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int n = s.size();
	for(int i = n-1;i >= 0;i --)
	{
		if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122))
		{
			if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'||s[i]=='Y'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
			{
				printf("YES");
				break;
			}
			else
			{
				printf("NO");
				break;
			}
		}
	}
	return 0;
}