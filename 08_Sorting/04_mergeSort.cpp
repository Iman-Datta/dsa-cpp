# include <iostream>
# include <vector>

using namespace std;

// merge two sorted halves
void merge(vector<int> &arr, int st, int mid, int end) {
    vector<int> temp;
    int i = st, j = mid + 1;

    while (i <= mid && j <= end){
        if(arr[i] < arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while (i <= mid){
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= end){
        temp.push_back(arr[j]);
        j++;
    }

    for(int idx = 0; idx < temp.size(); idx ++){
        arr[idx+st] = temp[idx];
    }
}

// merge sort function
void mergeSort(vector<int>& arr, int st, int end) {
    if (st < end){
        int mid = st + (end - st)/2;

        mergeSort(arr, st, mid); // Left half
        mergeSort(arr, mid + 1, end); // Right half

        merge(arr, st, mid, end);
    }
}

int main () {
    vector<int> nums;
    vector<int> ans;
    int n, element;

    cout << "Enter the size of the array: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << i + 1 << " Element: ";
        cin >> element;
        nums.push_back(element);
    }

    cout << "Original array: ";
    for (int val : nums) {
        cout << val << "\t";
    }

    cout << "\nAfter merge sort: ";
    mergeSort(nums, 0, nums.size()-1);

    for (int val : nums) {
        cout << val << "\t";
    }

    return 0;
}
