//Problem 1

#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int x;
        cin>>x;
        if(x==1 || x==2 || x==3 | x==4)
            cout<<"Yes"<<endl;
        else    
            cout<<"NO"<<endl;    
    }

    return 0;
}

//problem 2

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 3 == 2) {
            cout << "SMALL\n";
        }
        else if (n % 3 == 1) {
            cout << "HUGE\n";
        }
        else {
            cout << "NORMAL\n";
        }
    }
    return 0;
}

//problem 3

#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin>>tc;
    while(tc--) {
        int a,b,c,d;
        cin>>a>>b>>c;
        d=c-(b/a);
        if(d<0){
            cout<<"0\n";
        }
        else{
            cout<<d<<"\n";
        }
    }
    return 0;
}
