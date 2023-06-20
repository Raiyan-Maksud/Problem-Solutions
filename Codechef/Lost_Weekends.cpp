#include <iostream>
using namespace std;
int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
	    int arr[6];
	    for(int i=0; i<6; i++)
	        cin >> arr[i];
            
	    arr[0] = arr[0]*arr[5];
	    arr[1] = arr[1]*arr[5];
	    arr[2] = arr[2]*arr[5];
	    arr[3] = arr[3]*arr[5];
	    arr[4] = arr[4]*arr[5];

	    int sum=0;
	    for(int i=0; i<5; i++)
	        sum = arr[i] + sum;
	    if(sum<=120)
	        cout << "No" << endl;
	    else
	        cout << "Yes" << endl;
	}
	return 0;
}