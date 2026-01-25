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

void insurt_at_any_position(Node *&head, int idx, int val)
{
    Node *newNode = new Node(val);

    Node *temp = head;

    for (int i = 0; i < idx; i++)
    {
        /* code */
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next->prev = newNode;

    temp->next = newNode;
    newNode->prev = temp;
}


void print_linked_list(Node* head){
    Node* temp = head;
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

    insurt_at_any_position(head, 1, 200);
    print_linked_list(head);
    return 0;
}
