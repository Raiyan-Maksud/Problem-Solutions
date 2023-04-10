//problem 1

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
      int n;
      cin>>n;
      cout<<n*2<<endl;
    }

    return 0;
}

//problem 2

#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n, x;
        cin>>n>>x;
        if(x%n==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }
    return 0;
}

//problem 3

#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int x,y;
        cin>>x>>y;
    if(x>y)
        cout<<x-y<<endl;
    else if(x<=y)
        cout<<y-x<<endl;

    }

    return 0;
}

//problem 4

#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,k;
        cin>>n>>k;
        string str;
        if(k==0){
            if(n%4==0){
                cout<<"Off"<<endl;
            }else{
                cout<<"On"<<endl;
            }
            // str = (n%4==0)?"Off":"On";
        }else{
            if(n%4==0)
                cout<<"On"<<endl;
            else
                cout<<"Ambiguous"<<endl;         
            // str = (!n%4)?"On":"Ambiguous";
        }     
        // cout<<str<<endl;
    }
    return 0;
}

//problem 5

#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
    int n,x;
    cin>>n>>x;
    int min=999999;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
       if(min>arr[i])
            min=arr[i]; 
    }
    int value = x/min;
            if(x%min==0)
                value=x/min;
            else
                value=(x/min)+1;
    cout<<max(value,n)<<endl;
    }
    return 0;
}
