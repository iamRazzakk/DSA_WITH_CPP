// =======================================
// Problem: https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-for-dsa-a-batch-08/challenges/sort-it-6-3
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
    sort(array, array + n);

    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << array[i] << " ";
    }
    cout << endl;

    sort(array, array + n, greater<int>());
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << array[i] << " ";
    }

    return 0;
}