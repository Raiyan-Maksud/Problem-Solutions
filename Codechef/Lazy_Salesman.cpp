#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>>n>>k;
	    int arr[n];
	    for(int i = 0;i<n;i++)
	    {
	        cin>>arr[i];
	        
	    }
	    sort(arr, arr+n);
	    int count=0, sum=0;
	    for(int i=n-1;i>=0;i--)
	    {
	        sum=sum+arr[i];
	        count++;
	        if(sum>=k)
	        {
	            break;
	        }
	   
	    }
	    int ans;
	    ans = n- count;
	    cout<<ans<<endl;
	}
	return 0;
}
