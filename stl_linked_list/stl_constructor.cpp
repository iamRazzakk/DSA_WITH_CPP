/**
 * Author : Razzak
 * Problem Link :
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1
    list<int> l;
    // 2
    // list<int> l2(10);
    // 3
    int a[] = {10, 20, 30, 40};
    list<int> l2(a, a + 4);
    for (int l : l2)
    {
        /* code */
        cout << l << endl;
    }

    return 0;
}
