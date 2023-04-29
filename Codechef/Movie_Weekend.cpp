#include <iostream>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
	    cin>>b[i];
	}
	int ans=0,index=0;
	for(int i=0;i<n;i++)
	{
	    int tmp=a[i]*b[i];
	    if(ans<tmp)
	    {
	        ans=tmp;
	        index=i;
	    }
	    else if(ans==tmp)
	    {
	        if(b[i]>b[index])
	            index=i;
	    }
	}
	cout<<index+1<<endl;
	
    }
	
	return 0;
}