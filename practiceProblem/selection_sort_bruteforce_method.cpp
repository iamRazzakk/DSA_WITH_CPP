#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tv;
    cin >> tv;
    vector<int> arr(tv);
    for (int i = 0; i < tv; i++)
    {
        std::cin >> arr[i];
    }
    for (int i = 0; i < tv; i++)
    {
        for (int j = i + 1; j < tv; j++)
        {
            if (arr[i] == arr[j])
            {
                std::cout << "YES" << std::endl;
                return 0;
            }
        }
    }
    std::cout << "NO" << std::endl;
}
