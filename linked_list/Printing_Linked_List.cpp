// =======================================
// Problem: Printing Linked List

// Author : abdur_Razzak_rakib
// Date   : 2026-01-05
// =======================================

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int vlu;
    Node *next;
    Node(int vlu)
    {
        this->vlu = vlu;
        this->next = NULL;
    }
};

int main()
{

    Node *head = new Node(10);

    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    head->next = a;
    a->next = b;
    b->next = c;
    while (head != NULL)
    {
        cout << head->vlu << endl;
        head = head->next;
    }
}
