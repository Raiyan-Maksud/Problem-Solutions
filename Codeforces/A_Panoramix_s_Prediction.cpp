#include <bits/stdc++.h>
using namespace std;
#define pf printf
#define Y pf ("YES\n")
#define N pf ("NO\n")
bool prime (int n)
{
    if (n == 0 || n == 1)
        return false;
    if (!(n & 1))
    {
        if (n == 2)
            return true;
        else
            return false;
    }
    for (int i=2; i*i<=n; i++)
        if (n % i == 0)
            return false;
    return true;
}
int main (void)
{
    int n,m,i,p;
    while (cin >> n >> m)
    {
        for (i=n+1; ; i++)
        {
            if (prime(i))
            {
                p = i;
                break;
            }
        }
        if (p == m)
            Y;
        else
            N;
    }
    return 0;
}