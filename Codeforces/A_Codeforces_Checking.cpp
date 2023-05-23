#include<iostream>
using namespace std;
int main()
{
	int n;
	char P;
	cin>>n;
	while(n--)
	{
		cin>>P;
		if(P=='c'||P=='o'||P=='d'||P=='f'||P=='e'||P=='r'||P=='s')
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}