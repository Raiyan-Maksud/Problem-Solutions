#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	    }
	    int b[n];
	    for(int i=0; i<n; i++){
	        int count = 0;
	        for(int j=i+1; j<n; j++){
	            if(a[j]>a[i]){
	                count++;
	            }
	        }
	        b[i] = count;
	    }
	    for(int i=0; i<n; i++){
	        cout<<b[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}