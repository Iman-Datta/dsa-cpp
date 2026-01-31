#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // IMPORTANT 1:
    // Precompute frequency of each element
    // hash[i] will store how many times i appears in the array
    int hash[13] = {0};

    for(int i = 0; i < n; i++){
        hash[arr[i]]++;
    }

    int q;
    cout << "Enter number of queries: ";
    cin >> q;

    cout << "Enter query numbers:\n";
    while (q--) {
        int number;
        cin >> number;

        // IMPORTANT 2:
        // Fetching precomputed answer in O(1) time
        cout << "Frequency of " << number << " is: ";
        cout << hash[number] << endl;
    }

    // IMPORTANT 3:
    // Using hashing avoids repeated loops and reduces time complexity
    return 0;
}
