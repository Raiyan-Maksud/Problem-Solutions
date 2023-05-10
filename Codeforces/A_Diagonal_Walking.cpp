
/***from dust i have come, dust i will be***/

#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<functional>
#include<iomanip>
#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	int n,m;
	string s;
	cin>>n;
	cin>>s;
	int cnt=0;
	for(i=0;i<n-1;i++)
    {
        if(i+1<n)
        {
            if(s[i]=='U' && s[i+1]=='R')
                cnt++,i++;
            else if(s[i]=='R' && s[i+1]=='U')
                cnt++,i++;
        }
    }
    cout<<n-cnt;
	return 0;
}