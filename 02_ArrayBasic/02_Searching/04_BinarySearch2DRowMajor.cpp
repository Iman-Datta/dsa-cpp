#include <iostream>
#include <vector>
using namespace std;

bool binarySearch2D(vector<vector<int>> &A, int n, int m, int target) {
    int low = 0;
    int high = n * m - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        int row = mid / m;
        int col = mid % m;

        if (A[row][col] == target)
            return true;
        else if (A[row][col] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return false;
}

int main() {
    int n, m;
    cout << "Enter number of rows and columns: ";
    cin >> n >> m;

    vector<vector<int>> A(n, vector<int>(m));
    cout << "Enter elements (row-major order):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }

    int target;
    cout << "Enter element to search: ";
    cin >> target;

    if (binarySearch2D(A, n, m, target))
        cout << "Element found\n";
    else
        cout << "Element not found\n";

    return 0;
}
