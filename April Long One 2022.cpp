//Problem-1

#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin>>tc;
    while(tc--) {
        int x,y;
        cin>>x>>y;
        if(y>x){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
    return 0;
}

//Problem-2

#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin>>tc;
    for(int i=0; i<tc; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if((a*c)<b)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;       
        }
    }
    return 0;
}

//Problem 3

#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int a, b;
        cin >> a >> b;
        cout << (b-1)/a << endl;
    }
    return 0;
}

//problem 4

#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int a,b;
    cin >> a >> b;
    if (b-a > 2){
        if (a%2 == 0) {
            cout << a << " " << a+2 << "\n";
        }
        else if (a%3 == 0){
            cout << a << " " << a+3 << "\n";
        }
        else
        {
            cout << a+1 << " " << a+3 << "\n";
        }
    }
    else {
        if (__gcd(a,b) > 1) {
            cout << a << " " << a+2 << "\n";
            
        }
        else {
            cout << "-1" << "\n";
        }
    }
    }
    return 0;
}
