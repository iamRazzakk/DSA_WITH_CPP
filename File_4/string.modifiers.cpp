// =======================================
// Problem:
// Author : abdur_Razzak_rakib
// Date   : 2025-11-28
// =======================================

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int a = 10;
    // int b = 20;
    string first = "Hello";
    string sec = "Rakib";
    // a += b;
    // push back
    // first.push_back(' ');
    first += sec;
    // cout << a << endl;
    cout << first << endl;
    // first.pop_back();
    // cout << first << endl;
    // first.erase(3, 2);
    // cout << first << endl;
    // first.erase(3);
    // cout << first << endl;
    first.replace(2, 2, "kk");
    cout << first << endl;
    first.insert(2, "ll");
    cout << first << endl;
    return 0;
}