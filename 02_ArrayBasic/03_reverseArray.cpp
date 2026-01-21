# include <iostream>

using namespace std;

void reverseArry(int arr[], int size){
    int start, end;
    start = 0, end = size - 1;
    while (start < end){
        swap(arr[start], arr[end]);
        start ++, end --;
    }

    cout << "Reverse array: \n";
    for (int i = 0; i < size; i++) {
    cout<< arr[i]<< "\t";
    }
}

int main() {
    int arr[100], size;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout<< "Give the element input of the array"<<"\n";
    for (int i = 0; i < size; i ++){
        cout << (i+1) << " Element: ";
        cin >> arr[i];
    }

    cout << "Original array: \n";
    for (int i = 0; i < size; i++) {
        cout<< arr[i] << "\t";
    }
    cout << "\n";

    // Reverse Array
    reverseArry(arr,size);
    return 0;
}