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

void take_input_dynamic(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void print_Linklist(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        std::cout << temp->val << std::endl;
        temp = temp->next;
    }
}

int getSize(Node *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}

int main()
{
    // your code goes here

    Node *head = NULL;
    Node *headTwo = NULL;
    Node *tail = NULL;
    Node *tailTwo = NULL;
    int val;

    while (true)
    {

        std::cin >> val;
        if (val == -1)
        {
            break;
        }
        take_input_dynamic(head, tail, val);
    }
    while (true)
    {

        std::cin >> val;
        if (val == -1)
        {
            break;
        }
        take_input_dynamic(headTwo, tailTwo, val);
    }
    int sizeOne = getSize(head);
    int sizeTwo = getSize(headTwo);

    if (sizeOne == sizeTwo)
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }

    // print_Linklist(head);
}
