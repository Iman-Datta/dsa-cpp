#include <iostream>
#include <vector>
using namespace std;

int firstOccurrence(vector<int> &arr, int n, int x) {
    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x) {
            ans = mid;
            high = mid - 1;   // move left
        }
        else if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return ans;
}

int lastOccurrence(vector<int> &arr, int n, int x) {
    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x) {
            ans = mid;
            low = mid + 1;   // move right
        }
        else if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return ans;
}

int countOccurrences(vector<int> &arr, int n, int x) {
    int first = firstOccurrence(arr, n, x);
    if (first == -1)
        return 0;

    int last = lastOccurrence(arr, n, x);
    return last - first + 1;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter sorted array elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int x;
    cout << "Enter element to count: ";
    cin >> x;

    cout << "Count = " << countOccurrences(arr, n, x) << endl;

    return 0;
}