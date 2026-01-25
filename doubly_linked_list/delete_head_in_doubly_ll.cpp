/**
 * Author : Razzak
 * Problem Link : inseart at any position
 */

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

void delete_head(Node *&head, Node *&tail)
{
    Node *deletedHead = head;
    head = head->next;

    delete deletedHead;
    if (head == NULL)
    {
        /* code */
        tail = NULL;
    }

    head->prev = NULL;
}

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        /* code */
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
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
    delete_head(head, b);
    print_linked_list(head);
    return 0;
}
