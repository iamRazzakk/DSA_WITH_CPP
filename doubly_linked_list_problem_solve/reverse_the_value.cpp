/**
 * Author : Razzak
 * Problem Link : value same or not
 */

#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *prev;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};
void inseart_at_tail(Node *&head, Node *&tail, int val)

{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}
void print_val_reverse(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int valOne;

    while (true)
    {
        /* code */
        cin >> valOne;
        if (valOne == -1)
        {
            break;
        }
        inseart_at_tail(head, tail, valOne);
    }
    print_val_reverse(tail);

    return 0;
}
