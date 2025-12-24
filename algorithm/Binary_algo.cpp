// =======================================
// Problem: lean binary search algo
// Author : abdur_Razzak_rakib
// Date   : 2025-12-23
// =======================================

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> array(n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> array[i];
    }
    int targetValue;
    cin >> targetValue;
    int flag = 0;
    int l = 0;
    int r = n - 1;
    while (l <= r)
    {
        /* code */
        int mid = l + (r - 1) / 2;
        if (array[mid] == targetValue)
        {
            /* code */
            flag = 1;
            break;
        }
        else if (array[mid] > targetValue)
        {
            /* code */
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