#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    std::cin >> n;
    
    std::queue < int > que;
   
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        que.push(x);
    }
    int n2;
    std::cin >> n2;
     std::queue < int > que2;
    for (int i = 0; i < n2; i++) {
        int x;
        cin >> x;
        que2.push(x);
    }


    std::stack < int > stc;
    std::stack < int > stc2;
    while (!que.empty()) {
        stc.push(que.front());
        que.pop();
    }
    while (!que2.empty()) {
        stc2.push(que2.front());
        que2.pop();
    }



    std::queue < int > rev;
    while (!stc.empty()) {
        rev.push(stc.top());
        stc.pop();
    }

    std::queue<int> rev2 ;
     while (!stc2.empty()) {
        rev2.push(stc2.top());
        stc2.pop();
    }
    
     cout << (rev == rev2 ? "YES" : "NO") << "\n";
    return 0;
}