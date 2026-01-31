#include <bits/stdc++.h>
using namespace std;

int main () {
    string s;
    cout << "Enter the string: ";
    cin >> s;

    map<char, int> mpp;

    // IMPORTANT 1:
    // Precompute frequency of each character using map
    for(int i = 0; i < s.size(); i++){
        mpp[s[i]]++;
    }

    // IMPORTANT 2:
    // Map stores characters in sorted (ASCII) order
    cout << "Character -> Frequency\n";
    for(auto it : mpp){
        cout << it.first << " --> " << it.second << endl;
    }

    int q;
    cout << "Enter number of queries: ";
    cin >> q;

    cout << "Enter characters to find frequency:\n";
    while(q--){
        char ch;
        cin >> ch;

        // IMPORTANT 3:
        // Fetching frequency from map
        cout << "Frequency of '" << ch << "' is: ";
        cout << mpp[ch] << endl;
    }

    return 0;
}
