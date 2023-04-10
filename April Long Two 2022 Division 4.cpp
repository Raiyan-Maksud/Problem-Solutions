//problem 1

#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin>>tc;
    while(tc--){
        int x,y;
        cin>>x>>y;
        if(x*3<y*2)
            cout<<x*3<<endl;
        else{
            cout<<y*2<<endl;
        }    


    }
    return 0;
}

//problem 2

#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin>>tc;
    while(tc--){
        int x;
        cin>>x;
        if(x*.1<100)
            cout<<100<<endl;
        else    
            cout<<x*.1<<endl;    

    }
    return 0;
}

//problem 3

#include <iostream>
using namespace std;
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int a,b;
        cin>>a>>b;
        if(a/.1 == b/.2)
            cout<<"ANY"<<endl;
        else if(a/.1 > b/.2)
            cout<<"FIRST"<<endl;
        else
            cout<<"SECOND"<<endl;        
    }
    return 0;
}

//problem 4


