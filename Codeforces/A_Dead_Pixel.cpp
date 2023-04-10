#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    int a,b,x,y;
    while(tc--)
    {
        cin>>a>>b>>x>>y;
        int s1=a*y;
        int s2=b*x;
        int s3=a*(b-y-1);
        int s4=b*(a-x-1);
        s2=max(s1,s2);
        s4=max(s3,s4);
        cout<<max(s2,s4)<<endl;
    }
    return 0;
}