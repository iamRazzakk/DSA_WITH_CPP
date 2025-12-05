// =======================================
// Problem: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Q
// Author : abdur_Razzak_rakib
// Date   : 2025-12-02
// =======================================

#include <bits/stdc++.h>
using namespace std;

int main()
{

    string text;
    getline(cin, text);

    stringstream ss(text);
    string word;
    bool first = true;

    while (ss >> word)
    {
        reverse(word.begin(), word.end());
        if (!first)
        {

            cout << " ";
        }
        cout << word;
        first = false;
    }

    return 0;
}