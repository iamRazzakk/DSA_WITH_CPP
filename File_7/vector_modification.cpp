// =======================================
// Problem: Problem Name / Link
// Author : abdur_Razzak_rakib
// Date   : 2025-12-19
// =======================================

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 23, 233, 222, 344};
    // vector<int> v2;
    // v2 = v;
    // for (int i = 0; i < v2.size(); i++)
    // {
    //     /* code */
    //     cout << v2[i] << " ";
    // }
    // v2.pop_back();
    // v2.push_back(900);
    vector<int> v2 = {5, 54, 43, 34};
    // it's take two thing one is starting point and other is value
    // v.insert(v.begin() + 2, v2.begin(), v2.end());
    // * now let's learn vector erase;
    //* we can remove single value use erase
    v2.erase(v2.begin() + 2);
    for (int x : v2)
    {
        cout << x << "end" << endl;
    }
    //* we can remove multi value use erase
    v2.erase(v2.begin() + 1, v2.end());
    for (int x : v2)
    {
        cout << x << "nothing" << " ";
    }
}