#include <bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
int main (void)
{
    int x1,y1,x2,y2,m,n,ans;

    while (sf ("%d %d %d %d",&x1,&y1,&x2,&y2) != EOF)
    {
        m = abs (x1-x2);
        n = abs (y1-y2);
        ans = max (m,n);

        pf ("%d\n",ans);
    }
}