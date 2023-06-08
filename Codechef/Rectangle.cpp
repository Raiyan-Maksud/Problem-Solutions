#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if((a==b and c==d) or (a==c and b==d) or (a==d and b==c))
	        cout<<"YES\n";
	    else
	        cout<<"NO\n";
	}
	return 0;
}