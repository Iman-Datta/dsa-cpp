// Question: Product of all numbers in array

# include <iostream>
using namespace std;

int productArray(int arr[], int sz) {
    int product = 1;
    for (int i = 0; i < sz; i++){
        product *= arr[i];
    }
    return product;
}

int main () {
    int size = 7, product;
    int arr[] = {1,2,3,4,5,6,7};

    product = productArray(arr, size);
    cout << "Product of all element of your array: " << product << endl;
    return 0;
}