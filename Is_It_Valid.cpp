

// =======================================
// Problem: https://www.hackerrank.com/contests/mid-term-exam-a-basic-data-structures-a-batch-08/challenges/is-it-valid-1-1
// Author : abdur_Razzak_rakib
// Date   : 2026-03-02
// =======================================

#include <bits/stdc++.h>
using namespace std;

bool isMatch(string s)
{
    stack<char> stc;
    for (char c : s)
    {
        /* code */
        if (c == '0')
        {
            /* code */
            if (!stc.empty() && stc.top() == '1')
            {
                /* code */
                stc.pop();
            }
            else
            {

                stc.push(c);
            }
        }
        else if (c == '1')
        {
            /* code */
            if (!stc.empty() && stc.top() == '0')
            {
                /* code */
                stc.pop();
            }
            else
            {
                stc.push(c);
            }
        }
    }
    return stc.empty();
}
int main()
{

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        /* code */
        string val;
        cin >> val;
        if (isMatch(val))
        {
            /* code */
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}