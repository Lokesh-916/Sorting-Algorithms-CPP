#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {12, 8, 5, 34, 56, 69, 2};
    int n = arr.size();

    /*
    ============================================================
    Approach 1: Classic Selection Sort (Without STL Algorithms)
    ============================================================
    */
    
    // for (int i = 0; i <= n - 2; i++) {
    //     int mini = i;
    //     for (int j = i; j <= n - 1; j++) {
    //         if (arr[j] < arr[mini]) {
    //             mini = j;
    //         }
    //     }
    //     int temp = arr[mini];
    //     arr[mini] = arr[i];
    //     arr[i] = temp;
    // }



    /*
    ============================================================
    Approach 2: Selection Sort using C++ STL
    ============================================================
    */

    for (auto it = arr.begin(); it != arr.end() - 1; it++) {
        auto mini = min_element(it, arr.end());
        swap(*it, *mini);
    }

    // Output the sorted array
    for (auto x : arr) {
        cout << x << " ";
    }

    return 0;
}
