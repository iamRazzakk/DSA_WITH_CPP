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


int main() {
    std::list < int > head;

    int val;

    while (std::cin >> val && val != -1) {
        head.push_back(val);
    }

    head.reverse();


    for (int x: head) {
        cout << x << " ";
    }
    return 0;
}
