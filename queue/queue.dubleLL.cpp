/**
 * Author : Razzak
 * Problem Link :
 */

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *pre;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->pre = NULL;
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
        newNode->pre = tail;
        tail = newNode;
    }
    void pop()
    {
        if (head == NULL)
            return;
        Node *deleteNode = head;
        head = head->next;
        sz--;

        if (head == NULL)
            tail = NULL;
        else
            head->pre = NULL;

        delete deleteNode;
    }
    int front() { return head->val; }
    int back()  { return tail->val; }
    int size()  { return sz; }
    bool empty(){ return head == NULL; }
};

int main()
{

    myQueue q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        /* code */
        int val;
        cin >> val;
        q.push(val);
    }

    while (!q.empty())
    {
        /* code */
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}
