// =======================================
// Problem: Problem Name / Link
// Author : abdur_Razzak_rakib
// Date   : 2026-01-23
// =======================================

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insurt_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void print_doubly_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        std::cout << temp->val << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    insurt_at_head(head, 100);
    insurt_at_head(head, 200);
    print_doubly_linked_list(head);
    return 0;
}