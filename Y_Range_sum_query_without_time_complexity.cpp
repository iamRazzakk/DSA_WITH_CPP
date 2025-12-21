/**
 * Author : Razzak
 * Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        /* code */
        cin >> v[i];
    }
    while (q--)
    {
        /* code */
        int l, r;
        cin >> l >> r;
        int sum = 0;
        for (int i = l; i <= r; i++)
        {
            /* code */
            sum += v[i];
        }
        cout << sum << endl;
    }

    return 0;
}
