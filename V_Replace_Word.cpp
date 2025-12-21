/**
 * Author : Razzak
 * Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/V
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        /* code */
        char c = s[i];
        if (s.substr(i, 5) == "EGYPT")
        {
            /* code */

            cout << " ";
            i += 4;
        }
        else
        {
            cout << s[i];
        }
    }

    return 0;
}
