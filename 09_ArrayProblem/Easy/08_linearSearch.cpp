// Note: Linear search scans each element one by one and returns the index of the target if found, otherwise returns -1.
#include <iostream>
#include <vector>
using namespace std;

int linearSearch(const vector<int>& arr, int target){
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {5, 3, 8, 1, 9};
    int target = 1;
    int index = linearSearch(nums, target);
    if(index != -1){
        cout << "Found at index: " << index;
    } else {
        cout << "Not found";
    }
    return 0;
}