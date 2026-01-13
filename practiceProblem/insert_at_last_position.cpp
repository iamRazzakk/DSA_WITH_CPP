#include <bits/stdc++.h>

using namespace std;


class Node {
    public: int val;
    Node * next;
    Node(int val) {
        this -> val = val;
        this -> next = NULL;
    }

};
void insurt_at_any_position(Node* &head, Node* &tail, int val) {
    Node* newnode = new Node(val);
    if (head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode; 
    tail = newnode;
}

void print_linked_list(Node * head) {
    Node * temp = head;
    while (temp != NULL) {
        std::cout << temp -> val << std::endl;
        temp = temp -> next;
    }
}

int main() {
    // your code goes here


    Node * head = new Node(10);
    Node * a = new Node(20);
    Node * tail = new Node(30);

    head -> next = a;
    a -> next = tail;

    insurt_at_any_position(head, tail, 100);
    insurt_at_any_position(head, tail, 200);
    print_linked_list(head);

}
