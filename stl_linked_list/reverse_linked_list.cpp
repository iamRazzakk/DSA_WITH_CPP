// =======================================
// Problem: reverse data using recursion
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


void reverse_linked_list(Node* &head,Node* temp){
     if(temp == NULL) return; 
    if(temp->next == NULL){
        head = temp;
        return;
    }
    reverse_linked_list(head, temp->next);
    temp->next->next = temp;
    temp->next = NULL;
}


int main() {

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
    reverse_linked_list(head, head);

    // printFun();
    cout << head->val << endl;
}
