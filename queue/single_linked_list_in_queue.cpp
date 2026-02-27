// =======================================
// Problem: queue
// Author : abdur_Razzak_rakib
// Date   : 2026-02-21
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

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            /* code */
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;
    }

    void pop()
    {
        sz--;
        Node *deletedNode = head;
        head = head->next;
        delete deletedNode;
    }

    int front()
    {
        return head->val;
    }
    int back()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }

    int empty()
    {
        return head == NULL;
    }
};

int main()
{
    myQueue queue;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            /* code */
            break;
        }
        queue.push(val);
        /* code */
    }
    Node *temp = queue.head;
    while (temp != NULL)
    {
        /* code */
        cout << temp->val << endl;
    }

    return 0;
}