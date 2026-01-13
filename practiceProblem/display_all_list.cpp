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

void printValue(Node * & head) {

    while (head != NULL) {
        std::cout << head->value << std::endl;
        head = head -> next;
    }
}


int main() {
    Node * head = new Node(10);
    Node * a = new Node(20);
    head -> next = a;
    printValue(head);
}
