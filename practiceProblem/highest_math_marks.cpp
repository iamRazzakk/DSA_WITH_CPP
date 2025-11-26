// =======================================
// Problem: https://docs.google.com/document/d/1myhhYc5mXuI0G6jAMWp3yk4N0WO8aLse/edit
// Author : abdur_Razzak_rakib
// Date   : 2025-11-25
// =======================================

#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    string section;
    int math_marks;
    int cls;
    Student(string n, int r, string sec, int m, int clss)
    {
        name = n;
        roll = r;
        section = sec;
        math_marks = m;
        cls = clss;
    }
};

int main()
{
    Student s1("rakib", 2, "B", 98, 5);
    Student s2("shakib", 3, "B", 97, 5);
    Student s3("rakib", 4, "B", 99, 5);
    Student highest = s1;
    if (s2.math_marks > highest.math_marks)
    {
        highest = s2;
    }
    if (s3.math_marks > highest.math_marks)
    {
        /* code */
        highest = s3;
    }
    cout << "Hight Mark is: " << highest.math_marks << endl;

    return 0;
}