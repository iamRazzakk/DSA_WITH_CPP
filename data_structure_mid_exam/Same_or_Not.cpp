// =======================================
// Problem: https://www.hackerrank.com/contests/mid-term-exam-a-basic-data-structures-a-batch-08/challenges/same-or-not-ii
// Author : abdur_Razzak_rakib
// Date   : 2026-03-02
// =======================================

#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> stc;
    queue<int> que;
    int n,m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        /* code */
        int val;
        cin >> val;
        stc.push(val);
    }
    
    for (int i = 0; i < m; i++)
    {
        /* code */
        int val2;
        cin >> val2;
        que.push(val2);
    }
    if (n != m)
    {
        cout << "NO" << endl;
        return 0;
    }

    while (!stc.empty() && !que.empty())
    {
        /* code */
        if (stc.top() != que.front())
        {
            cout << "NO" << endl;
            return 0;
        }
        stc.pop();
        que.pop();
    }
    cout << "YES" << endl;
    return 0;
}