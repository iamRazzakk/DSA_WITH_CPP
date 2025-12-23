/**
 * Author : Razzak
 * Problem Link : https://codeforces.com/problemset/problem/1328/A
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */

        long long int a, b;
        cin >> a >> b;
        int reminder = a % b;

        if (reminder == 0)
        {
            /* code */
            cout << 0 << endl;
        }
        else
        {
            cout << (b - reminder) << endl;
        }
    }

    return 0;
}
