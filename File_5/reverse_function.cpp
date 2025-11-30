// =======================================
// Problem:
// Author : abdur_Razzak_rakib
// Date   : 2025-11-30
// =======================================

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int value[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> value[i];
    }
    reverse(value, value + n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << value[i] << " ";
    }
    return 0;
}