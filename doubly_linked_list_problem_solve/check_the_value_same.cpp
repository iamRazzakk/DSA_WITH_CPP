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
    tail = newnode;
}
void inseart_at_tail_two(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
bool isSameOrNot(Node *&head, Node *&headTwo)
{
    Node *t1 = head;
    Node *t2 = headTwo;
    while (t1 != NULL && t2 != NULL)
    {
        /* code */

        if (t1->val != t2->val)
        {
            /* code */
            return false;
        }
        t1 = t1->next;
        t2 = t2->next;
    }
    return (t1 == NULL && t2 == NULL);
}
int main()
{
    Node *head = NULL;
    Node *headTwo = NULL;
    Node *tail = NULL;
    Node *tailTwo = NULL;
    int valOne;
    int valueTwo;
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

    while (true)
    {
        cin >> valueTwo;
        if (valueTwo == -1)
            break;
        inseart_at_tail_two(headTwo, tailTwo, valueTwo);
    }

    if (isSameOrNot(head, headTwo))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
