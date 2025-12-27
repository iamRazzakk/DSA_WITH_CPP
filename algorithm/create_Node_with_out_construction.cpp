// Problem: create Node
// Author : abdur_Razzak_rakib
// Date   : 2025-12-25
// =======================================

#include <bits/stdc++.h>

using namespace std;
class Node
{
public:
    int value;
    Node *next;
};

int main()
{
    Node a, b, c;
    a.value = 10;
    b.value = 20;
    c.value = 30;

    a.next = &b;
    b.next = &c;
    c.next = NULL;
    std::cout << a.value << std::endl;
    std::cout << a.next->value << std::endl;
    std::cout << a.next->next->value << std::endl;
    std::cout << b.next->value << std::endl;

    return 0;
}
