// =======================================
// Problem: search query with leaner search
// Author : abdur_Razzak_rakib
// Date   : 2025-12-26
// =======================================

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int t;
        cin >> t;
        int flag = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == t)
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            std::cout << "YES" << std::endl;
        }
        else
        {
            std::cout << "NO" << std::endl;
        }
    }
    return 0;
}
