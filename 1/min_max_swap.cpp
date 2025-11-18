#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    // if (x < y)
    // {
    //     /* code */
    //     cout << x << endl;
    // }
    // else
    // {
    //     cout << y << endl;
    // }

    cout << min(x, y) << endl;
    cout << max(x, y) << endl;
    cout << min({1,2,3,4,5,6,7}) << endl;
    cout << max({20,30,5,06,89,88,888,874}) << endl;
    // int temp;
    // int temp = x;
    // int x = y;
    // int y= x;
    swap(x, y);
    cout << x << " "<< y << endl;

    return 0;
}