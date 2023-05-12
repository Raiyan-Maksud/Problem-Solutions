#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; 
    cin >> n;
	vector<int> ans;
	int x ; cin >> x;
	ans.emplace_back(1);
	int sum = x , other = 0;
	for(int i= 1; i < n ; i++){
		int temp ; cin >> temp;
		if(temp*2 <= x)
			ans.emplace_back(i+1),sum+=temp;
		else
			other += temp;
	}
	if(other < sum){
		cout << (int)ans.size()<< endl;
		for(auto t : ans)
			cout << t << " ";
		cout << endl;
	}
	else
		cout << 0 << endl;
    return 0;
}