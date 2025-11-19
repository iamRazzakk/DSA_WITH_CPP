#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    int *p = new int;
    *p = 200;
    cout << *p << endl;
}