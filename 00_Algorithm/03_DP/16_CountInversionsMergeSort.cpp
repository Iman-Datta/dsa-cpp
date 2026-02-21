#include <iostream>
#include <vector>
using namespace std;

long long mergeAndCount(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp;
    int i = low, j = mid + 1;
    long long invCount = 0;

    while (i <= mid && j <= high) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i++]);
        } else {
            temp.push_back(arr[j++]);
            invCount += (mid - i + 1); // key step
        }
    }

    while (i <= mid)
        temp.push_back(arr[i++]);

    while (j <= high)
        temp.push_back(arr[j++]);

    for (int k = low; k <= high; k++)
        arr[k] = temp[k - low];

    return invCount;
}

long long mergeSortAndCount(vector<int> &arr, int low, int high) {
    long long invCount = 0;

    if (low < high) {
        int mid = low + (high - low) / 2;

        invCount += mergeSortAndCount(arr, low, mid);
        invCount += mergeSortAndCount(arr, mid + 1, high);
        invCount += mergeAndCount(arr, low, mid, high);
    }
    return invCount;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Number of inversions = "
         << mergeSortAndCount(arr, 0, n - 1) << endl;

    return 0;
}