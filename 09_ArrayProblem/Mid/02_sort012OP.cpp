// Sort an array of 0's 1's and 2's

// Question: Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

// leetcode: 75

// Example 1: : Input: nums = [2,0,2,1,1,0] ||||||||  Output: [0,0,1,1,2,2]

// ALGO: DUTCH NATIONAL FLAG ALGORITHM

# include <iostream>
# include <vector>

using namespace std;

void sort012OP(vector<int> &nums){
    int low = 0, mid = 0, high = nums.size() - 1;

    while(mid <= high){
        if(nums[mid] == 0){
            swap(nums[mid], nums[low]);
            mid ++; low ++;
        }
        else if(nums[mid] == 1){
            mid ++;
        }
        else{
            swap(nums[mid], nums[high]);
            high --;
        }
    }
    return;
}

int main() {
    vector<int> nums = {2,0,2,1,1,0};
    cout << "The original array is: ";
    for(int val : nums) cout << val << "\t";

    sort012OP(nums);

    cout << "After oparetion the array is: ";
    for(int val : nums) cout << val << "\t";

    return 0;
}