// Sort an array of 0's 1's and 2's

// Question: Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

// Example 1: : Input: nums = [2,0,2,1,1,0] ||||||||  Output: [0,0,1,1,2,2]

# include <iostream>
# include <vector>


using namespace std;

void sort012(vector<int>&nums){
    int count0 = 0, count1 = 0, count2 = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == 0){
            count0 ++;
        }
        else if(nums[i] == 1){
            count1 ++;
        }
        else {
            count2 ++;
        }
    }

    int indx = 0;
    while(count0--) nums[indx++] = 0;
    while(count1--) nums[indx++] = 1;
    while(count2--) nums[indx++] = 2;
    return;
}

int main () {
    vector<int> nums = {2,0,2,1,1,0};
    sort012(nums);
    for(int val : nums){
        cout << val << "\t";
    }
    return 0;
}