#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int secondLargestElement(vector<int>::iterator fst,vector<int>::iterator lst){                         
    int largest = *fst;
    int secondMax = INT_MIN;
    fst++;

    while (fst != lst) {
        if (*fst > largest) {
            secondMax = largest;
            largest = *fst;
        }
        else if (*fst < largest && *fst > secondMax) {
            secondMax = *fst;
        }
        fst++;
    }
    return secondMax;
}

int main () {
    vector<int> numbers = {78, 23, 65, 34, 21};
    cout << "The second largest number is: " << secondLargestElement(numbers.begin(), numbers.end()) << endl;
    return 0;
}