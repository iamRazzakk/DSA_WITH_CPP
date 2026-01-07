// =======================================
// Problem: insert at tail
// Author : abdur_Razzak_rakib
// Date   : 2026-01-07
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
void insurt_at_tail(Node *&head, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        std::cout << temp->val << std::endl;
        temp = temp->next;
    }
}

int main()
{
    // your code goes here

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;

    insurt_at_tail(head, 100);
    print_linked_list(head);
}
