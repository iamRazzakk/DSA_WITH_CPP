/**
 * Author : Razzak
 * Problem Link : implement stack using stack (vector)
 */

#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        return v.empty();
    }
};

int main()
{
    myStack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);

    // pop

    stack.pop();
    stack.pop();
    // top
    if (stack.empty() != true)
    {
        /* code */
        cout << stack.top() << endl;
    }

    // size
    stack.size();
    cout << stack.size() << endl;

    // empty
    stack.empty();
    cout << stack.empty() << endl;
    return 0;
}
