#include <iostream>
#include <vector>

using namespace std;

int knapsackRecursive(int wt[], int val[], int n, int C) {
    if (n == 0 || C == 0)
        return 0;

    if (wt[n - 1] > C)
        return knapsackRecursive(wt, val, n - 1, C);

    return max(
        val[n - 1] + knapsackRecursive(wt, val, n - 1, C - wt[n - 1]),
        knapsackRecursive(wt, val, n - 1, C)
    );
}

int knapsackMemo(int wt[], int val[], int n, int C, vector<vector<int>> &dp) {
    if (n == 0 || C == 0)
        return 0;

    if (dp[n][C] != -1)
        return dp[n][C];

    if (wt[n - 1] > C)
        return dp[n][C] = knapsackMemo(wt, val, n - 1, C, dp);

    return dp[n][C] = max(
        val[n - 1] + knapsackMemo(wt, val, n - 1, C - wt[n - 1], dp),
        knapsackMemo(wt, val, n - 1, C, dp)
    );
}

int knapsackTabulation(int wt[], int val[], int n, int C) {
    vector<vector<int>> dp(n + 1, vector<int>(C + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int w = 1; w <= C; w++) {
            if (wt[i - 1] <= w)
                dp[i][w] = max(
                    val[i - 1] + dp[i - 1][w - wt[i - 1]],
                    dp[i - 1][w]
                );
            else
                dp[i][w] = dp[i - 1][w];
        }
    }
    return dp[n][C];
}


int main() {
    int n = 4;
    int wt[] = {1, 3, 4, 5};
    int val[] = {1, 4, 5, 7};
    int C = 7;

    cout << "Recursive: "
         << knapsackRecursive(wt, val, n, C) << endl;

    vector<vector<int>> dp(n + 1, vector<int>(C + 1, -1));
    cout << "Top-Down (Memo): "
         << knapsackMemo(wt, val, n, C, dp) << endl;

    cout << "Bottom-Up (Tab): "
         << knapsackTabulation(wt, val, n, C) << endl;

    return 0;
}