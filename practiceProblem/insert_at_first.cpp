#include <bits/stdc++.h>

using namespace std;

class Node {
    public: int value;
    Node * next;
    Node(int value) {
        this -> value = value;
        this -> next = NULL;
    }
};


void insurtHead(Node * & head, int value) {
    Node * newNode = new Node(value);
    newNode->next = head;
    head = newNode;

}

void printValue(Node * & head) {
    Node * temp = head;
    while (temp != NULL) {
        std::cout << temp -> value << std::endl;

        temp = temp->next;
    }
}


int main() {
    Node * head = new Node(10);
    Node * a = new Node(20);
    head -> next = a;
    insurtHead(head, 100);
    printValue(head);
}
