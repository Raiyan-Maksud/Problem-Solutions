#include<bits/stdc++.h>
using namespace std;
int remaind(string str){
    int n = str.size();
    if(n>=2){
        int num = (str[n-2]-'0')*10 + (str[n-1]-'0');
        return num % 20;
    }
    else
        return (str[0]-'0')%20;
}
int main(){
    int t;  cin>>t;
    while(t--){
        string  s; cin>>s;
        cout<<remaind(s)<<endl;
    }
    return 0;
}