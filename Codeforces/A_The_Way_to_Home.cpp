#include<bits/stdc++.h>
#define pf(n) printf("%d",n)
using namespace std;
int main()
{
	int i,j,k, m,n;
	string str;
	scanf("%d%d",&n,&m);
	cin>>str;

	int dist[n];
	fill(dist,dist+n,10000);

	dist[0]=0;
	for(i=0;i<n;i++)
	{
        if(str[i]=='1')
        {
            for(j=0;j<=m;j++)
            {
                if(i+j<n && str[i+j]=='1')
                    dist[i+j]=min(dist[i+j], dist[i]+1);
            }
        }
	}
	if(dist[n-1]==1e4)
        printf("-1");
    else
        pf(dist[n-1]);

	return 0;
}