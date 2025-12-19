// =======================================
// Problem:
// Author : abdur_Razzak_rakib
// Date   : 2025-12-03
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

int main()
{

    int s;
    cin >> s;
    Student array[s];
    for (int i = 0; i < s; i++)
    {
        /* code */
        cin >> array[i].name >> array[i].roll >> array[i].marks;
    }
    for (int i = 0; i < s; i++)
    {
        /* code */
        cout << array[i].name << " " << array[i].roll << " " << array[i].marks << endl;
    }

    return 0;
}