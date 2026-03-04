// Questiom: Given an integer array nums, find the subarray with the largest sum, and return its sum.
// Time complexcity = O(n)

// Algorithm : Kadane's Algorithm

// LeetCode : 53

# include <iostream>
# include <vector>
# include <climits>

using namespace std;

int maxSubArrSum(vector<int> &nums){
    int n = nums.size();
    int maxSum = INT_MIN;
    int currentSum = 0;
    for(int i = 0; i < n; i++){
        currentSum += nums[i];
        maxSum = max(currentSum, maxSum);
        if(currentSum < 0) currentSum = 0;
    }
    return maxSum;
}

int main() {
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int ans  = maxSubArrSum(nums);
    cout << "Maximum sub array sum of your array is: " << ans << endl;
    return 0;
}