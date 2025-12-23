/**
 * Author : Razzak
 * Problem Link : https://codeforces.com/contest/2179/problem/A
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int k, x;
        cin >> k >> x;
        int n = 1;
        while (true)
        {
            /* code */
            vector<int> array(x, 0);
            int isGroup = 1;

            for (int i = 1; i <= n; i++)
            {
                /* code */
                int group = (i - 1) % x;
                array[group] ++;
                if (array[group] > k)
                {
                    /* code */
                    cout << n << endl;
                    isGroup = 0;
                    break;
                }
                
            }
            if (!isGroup)
            {
                /* code */
                break;
            }
            n++;
        }
    }

    return 0;
}
