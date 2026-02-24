# include <iostream>
#include <climits>

# define MAX 100

using namespace std;

int findSecLargest(int arr[], int n){
    int max = arr[0];
    int secMax = INT_MIN;

    for(int i = 1; i < n; i++){
        if (arr[i] > max){
            secMax = max;
            max = arr[i];
        }
        else if(arr[i] > secMax && arr[i] != max){
            secMax = arr[i];
        }
    }
    return secMax;
}

int main() {
    int arr[MAX];

    int secMaxELement, n;

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Give " << n << " inputs of the array" << endl;
    
    for(int i = 0; i < n; i++){
        cout << "Enter your "<< i+1 << " element: ";
        cin >> arr[i];
    }
    secMaxELement = findSecLargest(arr, n);

    cout << "Your second largest element in your array is: " << secMaxELement << endl;
    return 0;
}