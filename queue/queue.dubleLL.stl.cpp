
/**
 * Author : Razzak
 * Problem Link :
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        /* code */
        int val;
        cin >> val;
        q.push(val);
       
    }

    while (!q.empty())
    {
        /* code */
        cout << q.front() << endl;

        q.pop();
    }

    return 0;
}
