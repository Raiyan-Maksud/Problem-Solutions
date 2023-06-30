# include<bits/stdc++.h>
using namespace std;
# define sc(x) scanf("%d",&x);
const int N=1000110;
int a[N];
char s[N];
int main()
{       
   int t;
   sc(t);
   while(t--)
   {
        int n;
        sc(n);
        for(int i=1;i<=n;i++) 
            sc(a[i]);
        for(int i=1;i<=n;i++)
        {
            int s1=0,s2=0;
            int m;
            sc(m);
            scanf("%s",s);
            for(int i=0;i<strlen(s);i++)
            {
                if(s[i]=='D') s1++;
                else s2++;
            }
            int k=s1-s2;
            a[i]+=k;
            a[i]=(a[i]+10)%10;
        }
        for(int i=1;i<=n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
   }
}