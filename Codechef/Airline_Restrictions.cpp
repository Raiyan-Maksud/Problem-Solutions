#include<iostream>
using namespace std;
int main(){
    int t,a,b,c,d,e;
    cin>>t;
    while(t>0){
        cin>>a>>b>>c>>d>>e;
       
    if(a<=e || b<=e || c<=e){
       if(a+b<=d && c<=e){
           cout<<"YES"<<endl;
       }
       else if(b+c<=d && a<=e){
           cout<<"YES"<<endl;
       }
       else if(a+c<=d && b<=e){
           cout<<"YES"<<endl;
       }
       else{
           cout<<"NO"<<endl;
       }
    }else{
        cout<<"NO"<<endl;
    }
    t--;
    }
}