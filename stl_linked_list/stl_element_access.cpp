/**
 * Author : Razzak
 * Problem Link : remove from specipic place
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10, 20, 30, 40, 50, 60, 10, 20, 10};
    // cout << l.front() << endl;
    // cout << l.back() << endl;
    // for iteretor

    cout << *l.begin() << endl;
    cout << *next(l.begin(), 2) << endl;
    return 0;
}
