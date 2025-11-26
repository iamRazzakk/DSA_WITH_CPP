// =======================================
// Problem: https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-for-dsa-a-batch-08/challenges/choose-three
// Author : abdur_Razzak_rakib
// Date   : 2025-11-26
// =======================================

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int array, sum;
        cin >> array >> sum;
        int arr[100];
        for (int i = 0; i < array; i++)
        {
            /* code */
            cin >> arr[i];
        }
        int tNumber = 0;
        for (int i = 0; i < array; i++)
        {
            /* code */
            for (int j = i + 1; j < array; j++)
            {
                /* code */
                for (int k = j + 1; k < array; k++)
                {
                    /* code */
                    if (arr[i] + arr[j] + arr[k] == sum)
                    {
                        /* code */
                        tNumber = 1;
                        break;
                    }
                }

                if (tNumber)
                {
                    break;
                    /* code */
                }
            }
            if (tNumber)
            {
                break;
                /* code */
            }
        }

        if (tNumber)
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