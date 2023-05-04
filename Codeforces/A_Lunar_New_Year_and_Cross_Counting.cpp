#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    char str[505][505];
    while (scanf ("%d",&n) != EOF)
    {
        for (i=0; i<n; i++)
            for (j=0; j<n; j++)
                cin >> str[i][j];

        int ans = 0;

        if (n >= 3)
            for (i=1; i<n-1; i++)
                for (j=1; j<n-1; j++)
                    if (str[i][j] == str[i-1][j-1] && str[i][j] == str[i-1][j+1] && str[i][j] == str[i+1][j-1] && str[i][j] == str[i+1][j+1] && str[i][j] == 'X')
                        ++ans;

        printf ("%d\n",ans);
    }

    return 0;
}