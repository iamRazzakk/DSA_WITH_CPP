// =======================================
// Problem: Problem Name / Link
// Author : abdur_Razzak_rakib
// Date   : 2025-11-24
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

Student *fun()
{
    Student karim(52, 5, 4.8);
    Student *p = &karim;
    return p;
}

int main()
{
    Student *obj = fun();
    
    cout << obj->roll << " " << obj->cls << " " << obj->gpa << " " << endl;
    return 0;
}

// after complete the fun function than it will be return from stack memory. that's why we can't find the value. it's show the garbage value.