#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        int n;
        cin>>n;
        char  p[n];
        char q[n];
        for(int u=0;u<n;u++){
            cin>>p[u];
            if (p[u]=='G') 
                p[u]='B';
        }
        for(int u=0;u<n;u++){
            cin>>q[u];
            if (q[u]=='G')
                q[u]='B';
        }
        int flag=0 ;
        for (int m=0;m<n;m++){
            if (q[m]==p[m])
              flag+=1;
            else
                flag=0;
        }
        if (flag==n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}