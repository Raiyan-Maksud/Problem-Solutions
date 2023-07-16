using namespace std;
#include <bits/stdc++.h>
int main()
{
    int n;
    cin >> n;
    while(n--){
        char arr[8][8];
        for(int i = 0;i < 8;i++){
            for(int j = 0;j < 8;j++){
                char x;
                cin >> x;
                arr[i][j] = x;
            }
        }
        for(int i = 1;i < 7;i++){
            for(int j = 1;j < 7;j++){
                int a = i - 1;
                int b = i + 1;
                int c = j - 1;
                int d = j + 1;
                if(arr[a][c] == '#' && arr[b][c] == '#' && arr[a][d] == '#' && arr[b][d] == '#'){
                    i++;
                    j++;
                    cout << i << " "  << j << endl;
                    break;
                }
            }
        }
    }
}