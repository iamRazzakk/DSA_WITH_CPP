/**
 * Author : Razzak
 * Problem Link :
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10, 20, 30};
    list<int> l2;
    // l2 = l;
    l2.assign(l.begin(), l.end());
    l2.push_front(100);
    l2.push_back(300);
    l2.pop_back();
    l2.pop_front();
    for (int val : l2)
    {
        /* code */
        cout << val << endl;
    }
    
    return 0;
}
