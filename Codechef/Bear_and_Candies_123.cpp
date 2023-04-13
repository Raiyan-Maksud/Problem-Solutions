#include <iostream>
using namespace std;
int main() {
    int numberOfTestCases, limakMax, bobMax, limakTotal, bobTotal;
    cin>>numberOfTestCases;
    while(numberOfTestCases--) {
        cin>>limakMax>>bobMax;
        limakTotal = 0;
        bobTotal = 0;
        int i = 1;
        while(1) {
            if(i&1) {
                limakTotal += i;
            } else {
                bobTotal += i;
            }
            if(limakTotal > limakMax) {
                cout<<"Bob"<<endl;
                break;
            }
            else if(bobTotal > bobMax) {
                cout<<"Limak"<<endl;
                break;
            }
            i++;
        }
    }
}