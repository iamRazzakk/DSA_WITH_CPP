// =======================================
// Problem: https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-for-dsa-a-batch-08/challenges/sort-it-2-1-1
// Author : abdur_Razzak_rakib
// Date   : 2025-11-25
// =======================================

#include <bits/stdc++.h>
using namespace std;
int *sort_it(int n)
{
    int *array = new int[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> array[i];
    }
    sort(array, array + n, greater<int>());
    return array;
}
int main()
{
    int n;
    cin >> n;

    int *arr = sort_it(n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }

    return 0;
}