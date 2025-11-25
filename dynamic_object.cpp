// =======================================
// Problem: Problem Name / Link
// Author : abdur_Razzak_rakib
// Date   : 2025-11-25
// =======================================

#include <bits/stdc++.h>
using namespace std;

/*
    Notes / Observations:
    - Input constraints: example
    - Expected output format: example
*/

class Student
{
public:
    int roll;
    int cls;
    int gpa;
    Student(int roll, int cls, int gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

int main()
{
    Student rahim(52, 2, 4.8);
    Student *karim = new Student(52, 2, 4.8);

    cout << karim->roll << " " << karim->cls << " " << karim->gpa << " " << endl;
    return 0;
}