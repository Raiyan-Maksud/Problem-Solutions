#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        long long s=1;
        long long e=n;
        long long ans = 0;
        while(s <= e)
        {
            long mid = s + (e-s)/2;
            long current = mid*(mid+1)/2;
            if(current <= n)
            {
                ans = mid;
                s = mid+1;
            }
            else
                e = mid-1;
        }
        cout << ans << endl;
    }
	return 0;
}