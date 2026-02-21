// Question: Given an integer array nums, rotate the array to the RIGHT by d steps, where d is non-negative.

// Time Complexity = O(n+d)
// Space Complexity = o(d)

#include <iostream>
#include <vector>

using namespace std;

void leftRotate(vector<int> &nums, int d){
    vector<int>temp;
    int n = nums.size();
    d = d % n;
    for(int i = 0; i < d ; i ++){
        temp.push_back(nums[i]);
    }

    // Shifting
    for(int i = d; i < n; i++){
        nums[i-d] = nums[i];
    }

    // Putback temp
    for(int i = n-d; i < n; i++){
        nums[i] = temp[i-(n-d)];
    }
}

int main(){
    vector<int> nums = {1,2,3,4,5,6,7};
    int d;
    cout << "Enter the value of K: ";
    cin >> d;

    leftRotate(nums, d);

    for(int x : nums){
        cout << x << "\t";
    }
    return 0;
}