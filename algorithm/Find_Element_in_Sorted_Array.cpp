// =======================================
// Problem: Find Element in Sorted Array
// Author : abdur_Razzak_rakib
// Date   : 2025-12-24
// =======================================

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, targetValue;

    cin >> n >> targetValue;
    vector<int> arrayValue(n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arrayValue[i];
    }
    int l = 0;
    int r = n - 1;
    int flag = 0;
    while (l < r)
    {
        /* code */
        int mid = l + (r - 1) / n;
        if (arrayValue[mid] == targetValue)
        {
            /* code */
            flag = 1;
            break;
        }
        else if (arrayValue[mid] > targetValue)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    if (flag == 1)
    {
        /* code */
        cout << "found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }

    return 0;
}