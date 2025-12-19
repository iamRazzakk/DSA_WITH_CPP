// =======================================
// Problem: https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-08/challenges/find-jessica
// Author : abdur_Razzak_rakib
// Date   : 2025-12-06
// =======================================

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    bool isHave = false;
    while (ss >> word)
    {
        /* code */
        if (word == "Jessica")
        {
            /* code */
            isHave = true;
            break;
        }
    }
    isHave == true ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}