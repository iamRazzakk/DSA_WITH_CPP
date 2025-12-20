// Problem: sum of two array
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
void sumTwoArrayValue(int n, int *first, int *sec)
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
    int arrayOne[n];

    int arraySec[n];
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