// =======================================
// Problem: Running Sum of an Array
// Author : abdur_Razzak_rakib
// Date   : 2025-12-26
// =======================================

#include <bits/stdc++.h>

using namespace std;

vector<int> sumOfArrayvalue(vector < int > & arr) {
    
    vector < int > result;
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        result.push_back(sum);
    }
    return result;
}

int main() {
    // your code goes here
    int n;
    std::cin >> n;
    std::vector < int > arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector < int > ans = sumOfArrayvalue(arr);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;

}
