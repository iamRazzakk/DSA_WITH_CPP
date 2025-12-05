// =======================================
// Problem: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/G
// Author : abdur_Razzak_rakib
// Date   : 2025-12-05
// =======================================

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int even = 0;
        int odd = 0;
        for (int i = 0; i < n; i++)
        {
            /* code */
            int x;
            cin >> x;
            if (x % 2 == 0)
            {
                even++;
            }
            else
            {

                odd++;
            }
        }
        if (n % 2 == 1)
        {
            cout << -1 << endl;
            continue;
        }
        int target = n / 2;
        cout << abs(even - target) << endl;
    }

    return 0;
}