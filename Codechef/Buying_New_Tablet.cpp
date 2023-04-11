#include <iostream>
using namespace std;
int main() {
    int numberOfTestCases, numberOfTablets, budget, width, height, price, maxArea;
    cin>>numberOfTestCases;
    while(numberOfTestCases--) {
        maxArea = 0;
        cin>>numberOfTablets>>budget;
        for(int i=0; i<numberOfTablets; i++) {
            cin>>width>>height>>price;
            if(price<=budget) {
                maxArea = max(maxArea, width*height);
            }
        }
        if(maxArea==0) {
            cout<<"no tablet"<<endl;
        } else {
            cout<<maxArea<<endl;
        }
    }
}