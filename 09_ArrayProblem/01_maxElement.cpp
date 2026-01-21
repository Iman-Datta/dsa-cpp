#include <iostream>
#include <vector>

using namespace std;

vector<int>::iterator max_element(vector<int>::iterator first, vector<int>::iterator last) {
    vector<int>::iterator maxIt = first;
    for (auto it = first; it != last; ++it) {
        if (*it > *maxIt) {
            maxIt = it;
        }
    }
    return maxIt;
}


int main () {
    vector<int> numbers = {78, 23, 65, 34, 21};
    cout << "The largest number is: " << *max_element(numbers.begin(), numbers.end()) << endl;
    return 0;
}