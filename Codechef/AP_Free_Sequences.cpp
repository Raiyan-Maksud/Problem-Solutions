#include <iostream>
#include <vector>
using namespace std;

bool isAPfree(vector<int> &v)
{
    int n = v.size();
    for(int i = 0; i<n-1; i++)
    {
        for(int j = i+1; j< n; j++)
        {
            for(int k = j+1;k<n;k++)
            {
                if(v[j] - v[i] == v[k] - v[j])
                    return false;
            }
        }
    }
    return true;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int> a(n);
	    for(int i = 0; i < n ; i++)
	        cin>>a[i];
	    if(isAPfree(a))
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	}
	return 0;
}