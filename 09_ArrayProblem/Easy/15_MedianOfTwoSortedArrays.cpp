#include <iostream>
#include <vector>
#include <climits>
using namespace std;

double findMedian(vector<int>& A, vector<int>& B, int n) {
    int low = 0, high = n;

    while (low <= high) {
        int cutA = (low + high) / 2;
        int cutB = n - cutA;

        int leftA  = (cutA == 0) ? INT_MIN : A[cutA - 1];
        int leftB  = (cutB == 0) ? INT_MIN : B[cutB - 1];
        int rightA = (cutA == n) ? INT_MAX : A[cutA];
        int rightB = (cutB == n) ? INT_MAX : B[cutB];

        if (leftA <= rightB && leftB <= rightA) {
            return (max(leftA, leftB) + min(rightA, rightB)) / 2.0;
        }
        else if (leftA > rightB) {
            high = cutA - 1;
        }
        else {
            low = cutA + 1;
        }
    }
    return 0.0; // never reached
}

int main() {
    int n;
    cout << "Enter size of arrays: ";
    cin >> n;

    vector<int> A(n), B(n);
    cout << "Enter elements of array A:\n";
    for (int i = 0; i < n; i++) cin >> A[i];

    cout << "Enter elements of array B:\n";
    for (int i = 0; i < n; i++) cin >> B[i];

    cout << "Median = " << findMedian(A, B, n) << endl;
    return 0;
}
