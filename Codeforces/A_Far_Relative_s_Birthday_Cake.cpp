#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define pfl(x)              printf("%lld\n",x)
int main()
{
    ll m,n,i,k,l,r,cnt=0,ans=0;
    cin>>n;
    char a[n+1][n+1];
    fr(i,n)fr(j,n)cin>>a[i][j];
    fr(i,n)
    {
        fr(j,n)
        {
            cnt=0;
            if(a[i][j]=='C')
            {
                for(k=i+1;k<n;k++)  if(a[k][j]=='C')cnt++;
                for(k=j+1;k<n;k++)  if(a[i][k]=='C')cnt++;
            }
            ans+=cnt;
        }
    }
pfl(ans);
}