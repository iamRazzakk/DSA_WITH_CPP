/**
 * Author : Razzak
 * Problem Link : remove from specipic place
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    list <int> l ={10,20,30,40,50,60,10,20,10};
    // ! for remove specipice value
    // l.remove(10);


    // ! for sort the linkelist
    l.sort();
    for (int list : l)
    {
        /* code */
        cout << list << endl;
    }
    
    return 0;
}
