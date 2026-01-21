# include <iostream>
using namespace std;

int linearSearch(int arr[], int terget, int sz) {
    for(int i = 0; i < sz; i++) {
        if (arr[i] == terget) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {4,2,7,8,1,2,5}, terget,size, index;
    size = 7;
    cout << "Enter your terget data: ";
    cin >> terget;
    index = linearSearch(arr, terget, size);
    if (index < 0){
       cout << "Target data not found in the array." << endl;
    }
    else{
         cout << "Target data found at index " << index << "." << endl;
    }
    return 0;
}