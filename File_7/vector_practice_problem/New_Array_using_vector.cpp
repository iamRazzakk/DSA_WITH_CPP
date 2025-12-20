// Problem: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/L
// Author : abdur_Razzak_rakib
// Date   : 2025-12-19
// =======================================

#include <iostream>
#include <vector>
using namespace std;

void vectorNewArray(vector<int> &a, vector<int> &b)
{
    for (int elem : b)
    {
        /* code */
        cout << elem << " ";
    }
    for (int elem : a)
    {
        /* code */
        cout << elem << " ";
    }
}

int main()
{

    int n;
    cin >> n;
    vector<int> first(n);
    vector<int> sec(n);

    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> first[i];
    }

    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> sec[i];
    }

    vectorNewArray(first, sec);

    return 0;
}