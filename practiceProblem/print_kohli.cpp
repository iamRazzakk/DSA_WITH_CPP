// =======================================
// Problem: Problem Name / Link
// Author : abdur_Razzak_rakib
// Date   : 2025-11-25
// =======================================

#include <bits/stdc++.h>
using namespace std;
class Cricketer
{
public:
    int jersey_no;
    string country;
};

int main()
{
    Cricketer *dhoni = new Cricketer;
    dhoni->jersey_no = 5;
    dhoni->country = "India";
    Cricketer *kholi = new Cricketer;
    kholi->jersey_no = 18;
    kholi->country = "India";
    delete dhoni;
    cout << kholi->jersey_no << " " << kholi->country << " " << endl;
    return 0;
}