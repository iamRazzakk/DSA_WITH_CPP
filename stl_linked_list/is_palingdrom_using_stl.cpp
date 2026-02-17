#include <bits/stdc++.h>

using namespace std;


int main() {

    std::list < int > head;
    int val;
    while (std::cin >> val && val != -1) {
        head.push_back(val);
    }

    auto left = head.begin();
    auto right = head.end();
    right--;
    bool flag = true;

    while (left != right && next(left) != right) {
        if ( * left != * right) {
            flag = false;
            break;
        }
        left++;
        right--;
    }


    if (flag) {
        std::cout << "YES" << std::endl;
    } else
    {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
