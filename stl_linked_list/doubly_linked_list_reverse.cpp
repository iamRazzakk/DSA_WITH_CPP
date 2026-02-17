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

void insurt_at_tail(Node *&head, Node *tail, int val)
{

    Node *newNode = new Node(val);

    if (head == NULL)
    {
        /* code */
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
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

void reverse_The_val(Node *head, Node *tail)
{
    // for (Node* i = head, j=tail; i < count; i++)
    {
        /* code */
    }
    
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        /* code */
        cin >> val;

        if (val == -1)
        {
            /* code */

            break;
        }
        insurt_at_tail(head, tail, val);
    }

    reverse_The_val(head, tail);

    print_doubly_linked_list(head);
    return 0;
}