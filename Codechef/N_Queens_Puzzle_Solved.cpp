#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
        cin>>n;
	    float f = pow((0.143*n),n);
	    if( (f-floor(f))<0.5)
	        cout<<floor(f)<<endl;
	    else
	        cout<<floor(f)+1<<endl;
	}
	return 0;
}