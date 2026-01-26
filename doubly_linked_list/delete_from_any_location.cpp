/**
 * Author : Razzak
 * Problem Link : at tail position
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

void delete_from_any_position(Node *&head, Node *&tail, int idx)
{
    Node *temp = head;

    for (int i = 0; i < idx; i++)
    {
        /* code */
        temp = temp->next;
    }

    Node *deleteNode = temp;
    deleteNode->prev->next = deleteNode->next;
    deleteNode->next->prev = deleteNode->prev;
    delete deleteNode;
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
    Node *tail = new Node(40);

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = tail;
    tail->prev = b;

    delete_from_any_position(head, tail, 1);

    print_linked_list(head);
    return 0;
}
