#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x1,x2;
        cin>>x1>>x2;
        if(x1==x2)
        cout<<"YES";
        else if(x1<x2)
        cout<<"NO";
        else
        cout<<"YES";
        cout<<endl;
    }
	return 0;
}
