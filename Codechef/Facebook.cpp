#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        int arr1[k];
        int arr2[k];
        for(int i=0;i<k;i++){
            cin>>arr1[i];
        }
        for(int i=0;i<k;i++){
            cin>>arr2[i];
        }
        int arr3[k];
        for(int i=0;i<k;i++){
            arr3[i]=arr1[i]+arr2[i];
        }
        int max=0;
        for(int i=0;i<k;i++){
            if(arr1[max]<arr1[i]){
                max=i;
            }
            if(arr1[max]==arr1[i]){
                if(arr3[i]>arr3[max]){
                    max=i;
                }
            }
        }
        cout<<max+1<<endl;
    }
	return 0;
}