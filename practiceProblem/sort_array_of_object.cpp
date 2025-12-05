// =======================================
// Problem: https://docs.google.com/document/d/15rYM3MJapotWUND4XENMVHnduPzIoSqLVqTPgg7goJE/edit?tab=t.0
// Author : abdur_Razzak_rakib
// Date   : 2025-12-05
// =======================================

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

bool cmp(Student l, Student r)
{
    if (l.marks != r.marks)
    {
        /* code */
        return l.marks < r.marks;
    }
    else
    {
        return l.roll > r.roll;
    }
}

int main()
{
    int n;
    cin >> n;
    Student array[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> array[i].name >> array[i].roll >> array[i].marks;
    }

    sort(array, array + n, cmp);

    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << array[i].name << " " << array[i].roll << " " << array[i].marks << endl;
    }
    return 0;
}