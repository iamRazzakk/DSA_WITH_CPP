// =======================================
// Problem: Detect cycle implementation
// Author : abdur_Razzak_rakib
// Date   : 2026-02-15
// =======================================
#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

bool cycleDetected(Node *&head)
{
    Node *fast = head;
    Node *slow = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}

int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = b;

    bool ans = cycleDetected(head);
    if (ans == true)
    {
        cout << "Cycle Detected" << endl;
    }
    else
    {
        cout << "Not Detected" << endl;
    }
}
