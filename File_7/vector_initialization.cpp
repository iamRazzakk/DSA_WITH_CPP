// =======================================
// Problem:
// Author : abdur_Razzak_rakib
// Date   : 2025-12-19
// =======================================

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;         // type 1
    vector<int> v(10);     // type 2
    vector<int> v(10, -1); // type 3
    vector<int> v2(v);     // type 4
    int array[5] = {1, 3, 4, 5, 3};

    vector<int> v(array, array + 5); // type 5
    vector<int> v{1, 3, 4, 2};       // type 6
    for (int i = 0; i < v.size(); i++)
    {
        /* code */
        cout << v2[i] << " ";
    }

    cout << v.size() << endl;
}