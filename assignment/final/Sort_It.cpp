// =======================================
// Problem: https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-08/challenges/sort-it-6-2
// Author : abdur_Razzak_rakib
// Date   : 2025-12-06
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
    int math_mark;
    int english_mark;
};

bool cmp(Student l, Student r)
{
    int totalForLeft = l.math_mark + l.english_mark;
    int totalForRight = r.math_mark + r.english_mark;
    if (totalForLeft != totalForRight)
    {
        /* code */
        return totalForLeft > totalForRight;
    }
    return l.studentId < r.studentId;
}

int main()
{
    int n;
    cin >> n;
    Student array[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> array[i].name >> array[i].cls >> array[i].section >> array[i].studentId >> array[i].math_mark >> array[i].english_mark;
    }
    sort(array, array + n, cmp);

    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << array[i].name << " " << array[i].cls << " " << array[i].section << " " << array[i].studentId << " " << array[i].math_mark << " " << array[i].english_mark << endl;
    }

    return 0;
}
// bool cmp(Student l, Student r)
// {
//     if (l.english_mark > r.english_mark)
//     {
//         return true;    // l comes first
//     }
//     else if (l.english_mark < r.english_mark)
//     {
//         return false;   // r comes first
//     }
//     else
//     {
//         // english_mark same
//         if (l.math_mark > r.math_mark)
//         {
//             return true;
//         }
//         else if (l.math_mark < r.math_mark)
//         {
//             return false;
//         }
//         else
//         {
//             // math_mark same
//             if (l.studentId < r.studentId)
//             {
//                 return true;   // smaller ID first
//             }
//             else
//             {
//                 return false;
//             }
//         }
//     }
// }