// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
// Note that you must do this in-place without making a copy of the array.

# include <iostream>
# include <vector>

using namespace std;

vector<int> moveZeroes(vector<int>&vec){
    int pos = 0;
    for(int i = 0; i < vec.size(); i++){
        if(vec[i] != 0){ // Non zero element
            swap(vec[i], vec[pos]); // Left shift
            pos++;
        }
    }
    return vec;
}

int main () {
    vector<int> nums = {0,1,0,3,12};
    cout << "Original Array: ";
    for(int val : nums){
        cout << val << " ";
    }
    cout << endl;
    vector<int>ans = moveZeroes(nums);
    cout << "After Oparetion: ";
    for(int val : ans){
        cout << val << " ";
    }
    return 0;
}