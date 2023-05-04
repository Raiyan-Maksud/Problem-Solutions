#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    map<int,int>m;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        m[a[i]]++;
	    }
	    int c=1;
	    for(auto p:m){
	        if(p.second%2!=0){
	            cout<<"NO"<<endl;
	            c=0;
	            break;
	        }
	    }
	    if(c){
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}