// Question: Swap the position maximum and miimum number of an array

# include <iostream>
using namespace std;

void swap_max_min_Element (int arr[], int sz){
    int max_indx = 0, min_indx = 0;
    for (int i = 0; i < sz; i++){
        if (arr[max_indx] < arr[i]){
            max_indx = i;
        }
        if (arr[min_indx] > arr[i]) {
            min_indx = i;
        }
    }
    swap(arr[max_indx], arr[min_indx]);


    for (int i = 0; i < sz; i ++) {
        cout << arr[i] << "\t";
    }
    return;
}

int main () {
    int size;
    int arr[] = {1,2,3,8,4,5,6,7};
    size = sizeof(arr)/sizeof(int);

    cout << "Original Array: ";
    for (int i = 0; i < size; i ++) {
        cout << arr[i] << "\t";
        }
    cout << "\n";
    cout << "After swaping the max and min element: ";
    swap_max_min_Element(arr, size);
}