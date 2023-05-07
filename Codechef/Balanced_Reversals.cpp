#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,c;
    string a;

    cin>> t;

    for (int i=0; i<t; i++){
        cin>>c;
        cin>>a;
        sort(a.begin(), a.end());
        cout<< a<< endl;
    }
    return 0;

}