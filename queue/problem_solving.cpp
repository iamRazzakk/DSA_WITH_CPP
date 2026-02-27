#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    std::cin >> n;
    std::queue<int> que;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        que.push(x);
    }

    std::stack<int> stc;
    while (!que.empty())
    {
        stc.push(que.front());
        que.pop();
    }

    std::queue<int> stc2;
    while (!stc.empty())
    {
        stc2.push(stc.top());
        stc.pop();
    }

    while (!stc2.empty())
    {
        std::cout << stc2.front() << std::endl;
        stc2.pop();
    }
}
