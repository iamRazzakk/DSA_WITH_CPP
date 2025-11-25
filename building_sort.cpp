// =======================================
// Problem: Problem Name / Link
// Author : abdur_Razzak_rakib
// Date   : 2025-11-25
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

    sort(array, array + n); // for acending
    sort(array, array + n, greater<int>()); // for descending
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << array[i];
    }
    return 0;
}