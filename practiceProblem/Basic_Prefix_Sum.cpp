// =======================================
// Problem: basic prefix sum.
// Author : abdur_Razzak_rakib
// Date   : 2025-12-22
// =======================================

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> array(n + 1);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> array[i];
    }
    vector<long long> pre(n + 1);
    pre[0] = array[0];
    for (int i = 0; i < n; i++)
    {
        /* code */
        pre[i] = pre[i - 1] + array[i];
    }

    return 0;
}