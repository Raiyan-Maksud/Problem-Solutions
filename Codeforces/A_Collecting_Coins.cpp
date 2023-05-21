#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int m,n,a, b,c,d,i,j,k,x,y,z,l,q,r;
    string s1, s2, s3, s4;

    int cnt=0,ans=0,sum=0;
    cin>>a>>b>>c>>n;

    sum=a+b+c+n;
    x=max(a, b);
    x=max(x, c);

    if( sum%3==0 and sum/3>=x ) 
        cout<<"YES"<<endl;
    else 
        cout<<"NO"<<endl;
    }
return 0;
}