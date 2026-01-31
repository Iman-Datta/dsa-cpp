#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    map<int, int> mpp;

    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // IMPORTANT 1:
    // Precompute frequency of each element using map
    for(int i = 0; i < n; i++){
        mpp[arr[i]]++;
    }

    // IMPORTANT 2:
    // Iterating through map gives elements in sorted order
    cout << "Element -> Frequency\n";
    for(auto it : mpp){
        cout << it.first << " --> " << it.second << endl;
    }

    int q;
    cout << "Enter number of queries: ";
    cin >> q;

    cout << "Enter numbers to find frequency:\n";
    while(q--){
        int number;
        cin >> number;

        // IMPORTANT 3:
        // Fetching frequency from map
        cout << "Frequency of " << number << " is: ";
        cout << mpp[number] << endl;
    }

    return 0;
}
