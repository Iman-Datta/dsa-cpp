#include <bits/stdc++.h>
using namespace std;

int main () {
    string s;
    cout << "Enter the string: ";
    cin >> s;

    // IMPORTANT 1:
    // Precompute frequency of each ASCII character
    // Index represents ASCII value of the character
    int hash[256] = {0};

    for (int i = 0; i < s.size(); i++){
        hash[s[i]]++;
    }

    int q;
    cout << "Enter number of queries: ";
    cin >> q;

    cout << "Enter characters to find frequency:\n";
    while(q--){
        char ch;
        cin >> ch;

        // IMPORTANT 2:
        // Fetching frequency directly using ASCII index in O(1) time
        cout << "Frequency of '" << ch << "' is: ";
        cout << hash[ch] << endl;
    }

    // IMPORTANT 3:
    // Precomputation allows multiple queries without re-scanning the string
    return 0;
} 