#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x,s;
	    cin>>n>>x>>s;
	    int swap=x;
	    for(int i=0;i<s;i++){
	        int a,b;
	        cin>>a>>b;
	        if(a==swap){
	            swap=b;
	        }
	        else if(b==swap){
	            swap=a;
	        }
	    }
	    cout<<swap<<endl;
	}
	return 0;
}