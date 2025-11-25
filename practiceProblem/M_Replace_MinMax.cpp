// =======================================
// Problem: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M
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
    int minIndex = 0;
    int maxIndex = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (array[i] < array[minIndex])
        {
            /* code */
            minIndex = i;
            cout << (minIndex = i);
        }
        if (array[i] > array[maxIndex])
        {
            /* code */
            maxIndex = i;
            cout << (maxIndex = i);
        }
    }
    // need to swap
    int temp = array[minIndex];
    array[minIndex] = array[maxIndex];
    array[maxIndex] = temp;

    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << array[i] << " ";
    }

    return 0;
}