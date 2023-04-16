#include <iostream>
using namespace std;
int main() {
    int numberOfTestCases, n, numberOfSquares = 0, sideOfSquare;
    cin>>numberOfTestCases;
    while(numberOfTestCases--) {
        cin>>n;
        while(n>0) {
            for(sideOfSquare=1; sideOfSquare*sideOfSquare<=n; sideOfSquare++);
            sideOfSquare--;
            numberOfSquares++;
            n = n - sideOfSquare*sideOfSquare;
        }
        cout<<numberOfSquares<<endl;
        numberOfSquares =  0;
    }
}