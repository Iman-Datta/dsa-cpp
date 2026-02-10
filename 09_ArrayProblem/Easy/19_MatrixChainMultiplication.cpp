#include <iostream>
#include <climits>
using namespace std;

int matrixChainRecursive(int p[], int i, int j) {
    // Base case: single matrix
    if (i == j)
        return 0;

    int minCost = INT_MAX;

    // Try all possible partitions
    for (int k = i; k < j; k++) {
        int cost = matrixChainRecursive(p, i, k)
                 + matrixChainRecursive(p, k + 1, j)
                 + p[i - 1] * p[k] * p[j];

        minCost = min(minCost, cost);
    }

    return minCost;
}

int main() {
    int p[] = {2, 3, 4, 8};
    int n = sizeof(p) / sizeof(p[0]);

    cout << "Minimum multiplications = "
         << matrixChainRecursive(p, 1, n - 1) << endl;

    return 0;
}
