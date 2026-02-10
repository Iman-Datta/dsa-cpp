# include <iostream>
# include <vector>

using namespace std;

int binarySearch(vector<int> &arr, int st, int end, int target){
    if (st > end){
        return -1;
    }
    int mid = st + (end - st)/2;
    if(arr[mid] == target){
        return mid;
    }
    else if (arr[mid] > target){
        return binarySearch(arr, st, mid -1, target);
    }
    else{
        return binarySearch(arr, mid + 1, end, target);
    }
}

int main() {
    vector<int> nums;
    int n, element, target;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter elements (sorted):\n";
    for (int i = 0; i < n; i++) {
        cin >> element;
        nums.push_back(element);
    }

    cout << "Enter element to search: ";
    cin >> target;

    int index = binarySearch(nums, 0, n - 1, target);

    if (index != -1)
        cout << "Element found at index: " << index;
    else
        cout << "Element not found";

    return 0;
}