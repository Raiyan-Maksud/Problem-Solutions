#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int wage[n], skill[n];
    for(int i = 0; i< n; i++)
    {
        cin >> wage[i];
    }
    for(int i = 0; i< n; i++)
    {
        cin >> skill[i];
    }
    int min_wage1 = 100001;
    int min_wage2 = 100001;
    int min_wage3 = 100001;
    for(int i = 0; i< n; i++)
    {
        if(skill[i] == 1 )
        {
           if(wage[i] < min_wage1)
                min_wage1 = wage[i];
        }
        else if(skill[i] == 2 )
        {
           if(wage[i] < min_wage2)
                min_wage2 = wage[i];
        }
        else
        {
           if(wage[i] < min_wage3)
                min_wage3 = wage[i];
        }
    }
    if(min_wage1+min_wage2<min_wage3)
    {
        cout << min_wage1+min_wage2 << endl;
    }
    else
    {
        cout << min_wage3 << endl;
    }
	return 0;
}
