// =======================================
// Problem: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J
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

        cin >> array[i];
    }
    sort(array, array + n);
    int firstIdx = array[0];
    int tempVariable = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (array[i] == firstIdx)
        {
            tempVariable++;
        }
    }

    if (tempVariable % 2 == 1)
    {
        /* code */
        cout << "Lucky" << endl;
    }
    else
    {
        cout << "Unlucky" << endl;
    }

    return 0;
}