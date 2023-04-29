#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    int k,x,y,z,l,r;

      int cnt=0,ans=0;
      cin>>x>>y>>l>>r;

      k=y+r;
      z=max(x,l);
      ans= (k+2)*2 + z*2;

      cout<<ans;

return 0;
}