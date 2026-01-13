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

void countTheNode(Node* &head){
    int count = 0;
    while(head !=NULL){
        count++;
        head = head->next;
    }
    std::cout << count << std::endl;
}


int main() {
    Node * head = new Node(10);
    Node * a = new Node(20);
    head->next = a;
    countTheNode(head);
}
