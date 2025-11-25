// =======================================
// Problem: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/N
// Author : abdur_Razzak_rakib
// Date   : 2025-11-25
// =======================================

#include <bits/stdc++.h>
using namespace std;

void shiftZeroIntoRight(int arr[], int n)
{
    // move 0
    int moveZero = 0;

    for (int i = 0; i < n; i++)
    {
        /* code */
        if (arr[i] != 0)
        {
            /* code */
            arr[moveZero] = arr[i];
            moveZero++;
        }
    }
    for (int i = moveZero; i < n; i++)
    {
        /* code */
        arr[i] = 0;
    }
}

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
    shiftZeroIntoRight(array, n);

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}