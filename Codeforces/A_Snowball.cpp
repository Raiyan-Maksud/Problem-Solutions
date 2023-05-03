#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w, h, sh1,sh2,sw1,sw2;
    cin>>w>>h>>sw1>>sh1>>sw2>>sh2;
    for(int i=h;i>=0;i--){
        w+=i;
        if(i==sh1){
            w=max(w-sw1,0);
        }
        if(i==sh2){
            w=max(w-sw2,0);
        }

    }
    cout<<w<<endl;
    
    return 0;
}