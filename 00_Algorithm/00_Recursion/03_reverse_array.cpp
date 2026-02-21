# include <iostream>

using namespace std;

void reverseArr(int arr[], int n){
    if(n <= 0){
        return;
    }
    cout << arr[n -1] << "\t";
    return reverseArr(arr, n-1);
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = 6;
    
    reverseArr(arr, n);
    return 0;
}