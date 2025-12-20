// Problem: reverse an array.
// Author : abdur_Razzak_rakib
// Date   : 2025-12-19
// =======================================

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> array(n);

    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> array[i];
    }

    reverse(array.begin(), array.end());
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << array[i] << " ";
    }
    return 0;
}