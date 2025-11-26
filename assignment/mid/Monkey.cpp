// =======================================
// Problem: https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-for-dsa-a-batch-08/challenges/monkey-1-2
// Author : abdur_Razzak_rakib
// Date   : 2025-11-25
// =======================================

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    while (getline(cin, str))
    {
        /* code */
        string temp = "";
        int i = 0;
        while (i < str.size())
        {
            /* code */
            if (str[i] != ' ')
            {
                /* code */
                temp += str[i];
            }
            i++;
        }
        sort(temp.begin(), temp.end());
        cout << temp << endl;
    }

    return 0;
}