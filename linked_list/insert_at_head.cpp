// =======================================
// Problem: insert at head
// Author : abdur_Razzak_rakib
// Date   : 2026-01-06
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
void insurt_at_head(Node *&head, int val)
{
    Node *newnode = new Node(val);
    newnode->next = head;
    head = newnode;
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

    insurt_at_head(head, 100);
    print_linked_list(head);
}
