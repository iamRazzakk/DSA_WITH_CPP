// =======================================
// Problem: Problem Name / Link
// Author : abdur_Razzak_rakib
// Date   : 2025-12-19
// =======================================

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {12, 22, 31, 45, 33, 22, 88, 22};
    //* if need to replace the value. it's receive 4 thing first two is from to i mean when it start and when it's end. third number is which value you need to replace and fourth is which number you need to set.
    // replace(v.begin(), v.end(), 22, 999);
    // TODO: find method
    auto iter = find(v.begin(), v.end(), 100);
    if (iter == v.end())
    {
        /* code */
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Find" << endl;
    }

    // cout << *iter << endl;

    // for (int i = 0; i < v.size(); i++)
    // {
    //     /* code */
    //     cout << v[i] << endl;
    // }

    return 0;
}