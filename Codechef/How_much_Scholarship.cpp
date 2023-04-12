#include <iostream>
using namespace std;
int main() {
    int rank;
    cin>>rank;
    if(rank>=1 && rank<=50) {
        cout<<"100";
    } else if(rank>50 && rank<=100) {
        cout<<"50";
    } else {
        cout<<"0";
    }
}