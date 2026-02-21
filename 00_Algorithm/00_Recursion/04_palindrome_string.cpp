#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string &str, int start, int end) {
    // Base case
    if (start >= end) {
        return true;
    }

    // If characters don't match
    if (str[start] != str[end]) {
        return false;
    }

    // Recursive call
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    bool status = isPalindrome(str, 0, str.length() - 1);

    if (status) {
        cout << str << " is a Palindrome string" << endl;
    } else {
        cout << str << " is not a Palindrome string" << endl;
    }

    return 0;
}