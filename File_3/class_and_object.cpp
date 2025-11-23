/**
 * Author : Razzak
 * Problem Link : https://example.com/problem
 */

#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    char name[100];
    int roll;
    double grade;
};


int main() {
    Student a, b;
    cin.getline(a.name, 100);

    cin >> a.roll >> a.grade;

    cin.ignore();
    cin.getline(b.name, 100);

    cin >> b.roll >> b.grade;
    cout << a.name << " " << a.roll << " " << a.grade<< endl;
    cout << b.name << " " << b.roll << " " << b.grade<< endl;
    
    return 0;
}
