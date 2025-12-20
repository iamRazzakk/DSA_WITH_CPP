// Problem: sum of two array with vector
// Author : abdur_Razzak_rakib
// Date   : 2025-12-19
// =======================================

#include <iostream>
#include <vector>
using namespace std;

// input
//  3
//  1 2 3
//  4 5 6
//  output
// 5 7 9
void sumTwoArrayValue(int n, vector<int> &first, vector<int> &sec)
{
    for (size_t i = 0; i < n; i++)
    {
        /* code */
        cout << first[i] + sec[i];
        if (i < n - 1)
        {
            /* code */
            cout << " ";
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> arrayOne(n);
    vector<int> arraySec(n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arrayOne[i];
    }

    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arraySec[i];
    }

    sumTwoArrayValue(n, arrayOne, arraySec);

    return 0;
}