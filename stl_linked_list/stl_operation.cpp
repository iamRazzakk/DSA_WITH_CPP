/**
 * Author : Razzak
 * Problem Link : remove from specipic place
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10, 20, 30, 40, 50, 60, 10, 20, 10};
    // ! for remove specipice value
    // l.remove(10);

    // ! for sort the linkelist
    // l.sort();

    // ! sort value dec order

    // l.sort(greater<int>());
    // ! for remove duplicate value but for that i need to do sort the linked list
    // l.unique();


    // for reverse the linked list

    l.reverse();
    for (int list : l)
    {
        /* code */
        cout << list << endl;
    }

    return 0;
}
