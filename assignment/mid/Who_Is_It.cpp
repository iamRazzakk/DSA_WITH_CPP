// =======================================
// Problem: https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-for-dsa-a-batch-08/challenges/who-is-it-4
// Author : abdur_Razzak_rakib
// Date   : 2025-11-26
// =======================================
// ! unsolve
#include <bits/stdc++.h>
using namespace std;
class Student
{
    //  unique ID, name, section, and total marks.
public:
    int id;
    string name;
    char section;
    int mark;
    Student(int i, string n, char sec, int m)
    {

        id = i;
        name = n;
        section = sec;
        mark = m;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int id, mark;
        string name;
        char section;
        cin >> id >> name >> section >> mark;
        Student first(id, name, section, mark);
        cin >> id >> name >> section >> mark;
        Student secound(id, name, section, mark);
        cin >> id >> name >> section >> mark;
        Student third(id, name, section, mark);

        Student *hig = &first;
        if (secound.mark > hig->mark)
        {
            /* code */
            hig = &secound;
        }
        else if (secound.mark == hig->mark && secound.id < hig->id)
        {
            /* code */
            hig = &secound;
        }

        if (secound.mark > hig->mark)
        {
            /* code */
            hig = &third;
        }
        else if (third.mark == hig->mark && third.id < hig->id)
        {
            /* code */
            if (third.id < hig->id)
            {
                /* code */
                hig = &third;
            }
        }
        cout << hig->id << " " << hig->name << " " << hig->section << " " << hig->mark << endl;
    }

    return 0;
}