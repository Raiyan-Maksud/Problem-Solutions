#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	   int n; cin>>n;
	   int a[n];
	   for(int i = 0; i<n; i++) cin>>a[i];
	   
        int C = 0;
        for(int i = 0; i<n; i++){
            if(a[i]>= 1 && a[i] <= 7){
                C = i;
            }
        }
        cout<<C+1<<endl;
	}
	return 0;
}