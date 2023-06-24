#include <iostream>
using namespace std;
int main()
{
    int n,i,x;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x;
        int a[x], j, counte=0, counto=0;
        for(j=0;j<x;j++){
            cin>>a[j];
            if(a[j]%2==0)
                counte+=a[j];
            else
                counto+=a[j];
        }
        if(counte > counto)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}