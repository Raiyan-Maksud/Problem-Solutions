#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while (t--){
	    int n,count=0;
	    cin>>n;
	    string s;
	    cin>>s;
	    for(int i=0;i<n;i++){
	        if(s[i]=='1')
	            count++;
	    }
	    int total = count+(120-n);
	    float per = (total*100)/120;
	    if(per>=75)
	        cout << "YES" << std::endl;
	    else if(per<75)
	        cout << "NO" << std::endl;
	}
	return 0;
}