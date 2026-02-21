// You are given two arrays arr1[] and arr2[]. Your task is to find the union of these two arrays.

// Time Complexity = O(n + m)

#include <iostream>
#include <set>

using namespace std;

int main() {
    int n = 5, m = 5;
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {2, 3, 4, 4, 5};

    set<int> s;

    // Insert elements of arr1
    for (int i = 0; i < n; i++) {
        s.insert(arr1[i]);
    }

    // Insert elements of arr2
    for (int i = 0; i < m; i++) {
        s.insert(arr2[i]);
    }

    // Print Union
    cout << "Union of arrays: ";
    for (auto it : s) {
        cout << it << " ";
    }

    return 0;
}