# include <iostream>
#include <climits>
# include <unordered_map>

# define MAX 100

using namespace std;

int findSecLargestRecursive(int arr[], int n){
    
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
    secMaxELement = findSecLargestRecursive(arr, n);

    cout << "Your second largest element in your array is: " << secMaxELement << endl;
    return 0;
}