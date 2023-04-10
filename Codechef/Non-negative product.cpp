#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc, x, a[10000], temp=1;
    cin>>tc;
    while(tc--){
        int cnt=0;
        cin>>x;
        for (int i = 0; i < x; i++)
        {
            cin>>a[i];
        }
        int flag=0;
        for (int i = 0; i < x; i++)
        {
                
            if(a[i] < 0)
                cnt++;
            if(a[i] == 0)
                flag=1;
                
            
        }      
           if(cnt %2 == 0 || flag==1)
                cout<<0<<endl;
            else{
                cout<<1<<endl;     
        }
        // for (int i = 0; i < x; i++)
        // {
        //     temp = temp*a[i]; 
        // }
        //     if(temp<0)
        //         cout<<1<<endl;
        //     else{
        //         cout<<0<<endl;
        // }

            
    }
    return 0;
}
