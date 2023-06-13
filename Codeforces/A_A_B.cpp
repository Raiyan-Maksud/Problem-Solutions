#include <iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
       if(t==1) return 0; // this is the line that causes the error
    while(t--){
        int a,b;
        char c ;
        cin>>a>>c>>b;
        cout<<(a+b)<<endl;
    }

}