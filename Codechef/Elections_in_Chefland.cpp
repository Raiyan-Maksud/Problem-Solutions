#include <iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	for(int i=0; i<t; i++){
	    int xa, xb, xc;
	    cin >> xa >> xb >> xc;

	    if(xa > 50)    
            cout << "A" << endl;
	    else if(xb > 50)   
            cout << "B" << endl;
	    else if(xc > 50)   
            cout << "C" << endl;
	    else    
            cout << "NOTA" << endl;
	}
	return 0;
}