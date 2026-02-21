#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i], arr[high]);
    return i;
}

int quickSelect(vector<int>& arr, int low, int high, int k) {
    if (low <= high) {
        int p = partition(arr, low, high);

        if (p == k)
            return p;
        else if (p > k)
            return quickSelect(arr, low, p - 1, k);
        else
            return quickSelect(arr, p + 1, high, k);
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter size of array (odd): ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int medianIndex = n / 2;

    int pos = quickSelect(arr, 0, n - 1, medianIndex);

    cout << "Median element = " << arr[pos] << endl;
    cout << "Left neighbor = " << arr[pos - 1] << endl;
    cout << "Right neighbor = " << arr[pos + 1] << endl;

    return 0;
}
