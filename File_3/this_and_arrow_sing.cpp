/**
 * Author : Razzak
 * Problem Link : https://example.com/problem
 */

#include <bits/stdc++.h>
using namespace std;


class Student {
    public:
    int roll;
    int cls;
    double gpa;
    Student (int roll, int cls, double gpa){
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;

    }

};

int main() {
    Student rakib(45, 5, 3.2);
    Student shakib(12, 5, 4.2);

    cout<< rakib.roll << " " << rakib.cls << " " << rakib.gpa << endl;
    cout<< shakib.roll << " " << shakib.cls << " " << shakib.gpa << endl;
    return 0;
}
