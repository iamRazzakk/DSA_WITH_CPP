// =======================================
// Problem:
// Author : abdur_Razzak_rakib
// Date   : 2025-12-02
// =======================================

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int english;
    int bangla;

    Student(string name, int roll, int english, int bangla)
    {
        this->name = name;
        this->roll = roll;
        this->english = english;
        this->bangla = bangla;
    }
    void getTheResult()
    {
        cout << "Md " << name << " " << "Your total mark is: " << english + bangla << endl;
    }
};

int main()
{
    Student rakib("Rakib Hossian", 1, 90, 91);
    rakib.getTheResult();
    // cout << rakib.name << " " << rakib.roll << " " << rakib.english << " " << rakib.bangla << endl;
    Student shakib("Shakib Hossian", 2, 89, 92);
    shakib.getTheResult();

    return 0;
}