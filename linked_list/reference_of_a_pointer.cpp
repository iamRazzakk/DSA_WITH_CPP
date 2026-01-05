// =======================================
// Problem: reference of a pointer
// Author : abdur_Razzak_rakib
// Date   : 2026-01-05
// =======================================

#include <bits/stdc++.h>
using namespace std;
void fun(int *&p)
{
    p = NULL;
}

int main()
{
    int x = 10;
    int *p = &x;
    fun(p);
    cout << "In Main Funcion" << *p << endl;
    return 0;
}