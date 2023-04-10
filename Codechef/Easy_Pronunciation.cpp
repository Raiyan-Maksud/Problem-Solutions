#include <iostream>
using namespace std;
int main()
{
    int t,count=0;
    cin>>t;
    while (t--)
    {   
    	bool ok=false;
    	count=0;
    	int N;
        cin>>N;
        string a;
        cin>>a;
       	for(int i=0; i<N;i++)
        {
            if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
                count=0;
            else
               count++;
	        if(count>=4)
	        {
	          ok=true;
	          break;
	        }
        }
    if(ok)cout<<"NO\n";
    else cout<<"YES"<<endl;
    
    }
    return 0;
}