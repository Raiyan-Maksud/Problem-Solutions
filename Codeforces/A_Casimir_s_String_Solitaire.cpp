#include <iostream>
#include <string>
using namespace std;
int main(){
    int cases;
    int a,b,c = 0;
    string str[1000];
    cin >> cases;
    for(int i = 0 ; i < cases; i++)
        cin >> str[i];
    for(int i = 0 ; i < cases; i++)
    {
        for(int j = 0 ; j < str[i].length() ; j++)
        {
            if(str[i][j] == 'A')
                a++;
            else if(str[i][j] == 'B')
                b++;
            else
                c++;
        }

            if(a + c == b)
                cout << "YES";
            else
                cout << "NO";
        cout << endl;
        a = 0;
        b = 0;
        c = 0;
    }
    return 0;
}