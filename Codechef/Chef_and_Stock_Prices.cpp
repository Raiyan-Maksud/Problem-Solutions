#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    
	    int s, a, b,c;
	    cin>>s>>a>>b>>c;
	    
	    double price=s;
	    price += price*c/100;
	    
	    if(price>=a && price<=b)
	    cout<<"Yes"<<endl;
	    
	    else
	    cout<<"No"<<endl;
	}
	return 0;
}