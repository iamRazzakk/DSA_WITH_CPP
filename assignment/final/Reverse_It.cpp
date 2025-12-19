// =======================================
// Problem: https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-08/challenges/reverse-it-8-2
// Author : abdur_Razzak_rakib
// Date   : 2025-12-05
// =======================================

#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    char section;
    int studentId;
};

int main()
{
    int t;
    cin >> t;
    Student array[t];
    for (int i = 0; i < t; i++)
    {
        /* code */
        cin >> array[i].name >> array[i].cls >> array[i].section >> array[i].studentId;
    }
    // reverse(array, array + t);
    for (int i = 0; i < t / 2; i++)
    {
        /* code */
        char temp = array[i].section;
        array[i].section = array[t - i - 1].section;
        array[t - i - 1].section = temp;
    }

    for (int i = 0; i < t; i++)
    {
        /* code */
        cout << array[i].name << " " << array[i].cls << " " << array[i].section << " " << array[i].studentId << endl;
    }

    return 0;
}