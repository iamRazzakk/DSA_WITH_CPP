// =======================================
// Problem: delete from any position
// Author : abdur_Razzak_rakib
// Date   : 2026-01-17
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

void delete_head_from_any_position(Node *&head, int idx)
{
    Node *temp = head;

    for (int i = 0; i < idx; i++)
    {
        /* code */
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}
void print_value(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        std::cout << temp->val << std::endl;

        temp = temp->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        /* code */
        int val;
        std::cin >> val;
        if (val == -1)
        {
            /* code */
            break;
        }
        delete_head_from_any_position(head, 2);
    }
    print_value(head);
    return 0;
}