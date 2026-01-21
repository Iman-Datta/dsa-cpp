// Question: Find the unique number in an array

# include <iostream>

using namespace std;

void unique_element(int arr[], int sz) {
    int i = 0, j = 0;
    bool status;

    for ( i = 0; i < sz; i ++) {
        status = true;  
        for ( j = 0; j < sz; j++) {
            if (j != i && arr[j] == arr[i]) {
                status = false;
                break;
            }
        }
        if (status == true){
            cout << "The unique data of the array: " << arr[i] << endl;
        }
    }
}

int main () {
    int arr[] = {4,2,3,4,2,5};
    int size = sizeof(arr) / sizeof(int);

    unique_element(arr,size);
   
    return 0;
}