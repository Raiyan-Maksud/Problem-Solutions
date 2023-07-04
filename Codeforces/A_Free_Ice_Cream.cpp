#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;
int main()
{
    char a;
    long long i,n,x,q,d,s,f=0;

    cin >> n >> s;
    for(i=1; i<=n; i++)
    {
     cin >> a >> d;
     if(a=='+') s+=d;
     if(a=='-') {
            if(s<d) f++;
            else s-=d;
    }}
    cout << s << " " << f << endl;
    return 0;
}