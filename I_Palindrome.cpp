/**
 * Author : Razzak
 * Problem Link : http://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string reverseFunction = s;
    reverse(reverseFunction.begin(), reverseFunction.end());
    if (s == reverseFunction)
    {
        /* code */
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
