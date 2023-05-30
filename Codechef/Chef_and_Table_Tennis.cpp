#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int z=0,o=0;
	    for(int i=0;i<s.length();i++)
	    {
	        if(s[i]=='0')
	            z++;
	        else
	            o++;
	    }
	    if(z>o)
	        cout<<"LOSE"<<endl;
	    else
	        cout<<"WIN"<<endl;
	}
	return 0;
}