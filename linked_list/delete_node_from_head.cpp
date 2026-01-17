// =======================================
// Problem: Delete node from head
// Author : abdur_Razzak_rakib
// Date   : 2026-01-17
// =======================================

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


void insurt_at_tail(Node* & head, Node* & tail, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void print_node(Node* head){
    Node * temp = head;
    while(temp!=NULL){
        std::cout << temp->val << std::endl;
    
        temp = temp->next;
    }
}


// void print_reverse_using_recursion(Node* temp){
//     if(temp == NULL){
//         return;
//     }
//     print_reverse_using_recursion(temp->next);
//     std::cout << temp->val << std::endl;
// }

void deleteHeadNode(Node* &head){
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
}


int main() {
    // your code goes here

    Node* head = NULL;
    Node* tail = NULL;
    
    
    while(true){
        int val; 
        std::cin >> val;
        if(val == -1){
            break;
        }
        insurt_at_tail(head, tail, val);
    }
    deleteHeadNode(head);
    print_node(head);
    // print_reverse_using_recursion(head);
}
