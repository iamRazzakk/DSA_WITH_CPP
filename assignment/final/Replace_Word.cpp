// =======================================
// Problem: https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-08/challenges/replace-word
// Author : abdur_Razzak_rakib
// Date   : 2025-12-08
// =======================================

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string s, x;
        cin >> s >> x;

        int s_size = s.size();
        int x_size = x.size();

        string temp = x;

        for (int i = 0; i < s_size; i++)
        {
            for (int j = 0; j < x_size; j++)
            {
                temp[j] = s[i + j];
            }

            if (temp == x)
            {
                cout << "#";
                i += x_size - 1;
            }
            else
            {
                cout << s[i];
            }
        }

        cout << endl;
    }

    return 0;
}