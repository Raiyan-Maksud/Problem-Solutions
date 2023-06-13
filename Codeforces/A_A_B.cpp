#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,l,o;
    cin>>t;
    if(t==1)
       return 0;
    for (int i=0;i<t;i++){
        string s;
        cin>>s;
        cout<<s[0]-'0'+s[2]-'0'<<endl; 
    }
    return 0;
}