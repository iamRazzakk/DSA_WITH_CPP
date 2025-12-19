// =======================================
// Problem: Problem Name / Link
// Author : abdur_Razzak_rakib
// Date   : 2025-12-19
// =======================================

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // with size
    int n;
    cin >> n;
    //! prev how i take an array input
    // int array[n];
    //* using vector take an array input.
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << v[i] << " ";
    }

    return 0;

    // with out size
    int m;
    cin >> m;
    vector<int> v;
    for (int i = 0; i < m; i++)
    {
        /* code */
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        /* code */
        cout << v[i] << " ";
    }
    return 0;
}