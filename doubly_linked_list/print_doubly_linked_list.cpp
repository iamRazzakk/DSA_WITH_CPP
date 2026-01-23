#include <bits/stdc++.h>

using namespace std;

class Node {
    public: int val;
    Node * next;
    Node * pre;
    Node(int val) {
        this -> val = val;
        this -> next = NULL;
        this -> pre = NULL;
    }
};


void print_forword(Node * head) {
    Node * temp = head;
    while (temp != NULL) {
        std::cout << temp -> val << " ";
        temp = temp -> next;
    }
    std::cout << std::endl;
}


void print_backword (Node* tail){
    Node * temp = tail;
    while(temp != NULL){
        std::cout << temp->val << " ";
        temp = temp->pre;
    }
    std::cout << std::endl;
}


int main() {
    Node * head = new Node(10);
    Node * a = new Node(20);
    Node * tail = new Node(30);

    head -> next = a;
    a -> pre = head;
    a -> next = tail;
    tail -> pre = a;
    print_forword(head);
    print_backword(tail);
    return 0;

}
