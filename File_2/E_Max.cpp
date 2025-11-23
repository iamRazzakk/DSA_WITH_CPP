// =======================================
// Problem: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E
// Author : abdur_Razzak_rakib
// Date   : 2025-11-21
// =======================================

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> array[i];
    }
    int max_number = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        /* code */
        max_number = max(array[i], max_number);
    }
    cout << max_number << endl;

    return 0;
}