// Questiom: Given an integer array nums, find the subarray with the largest sum, and return its sum.
// Time complexcity = O(n^3)
# include <iostream>
# include <vector>

using namespace std;

int maxSubArrSum(vector<int> &nums){
    int n = nums.size();
    int maxSum = 0;

    for(int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            int subArrSum = 0;
            for(int k = i; k < j; k ++){
                subArrSum += nums[k];
                maxSum = max(subArrSum,maxSum);
            }
        }
    }
    return maxSum;
}

int main() {
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int ans  = maxSubArrSum(nums);
    cout << "Maximum sub array sum of your array is: " << ans << endl;
    return 0;
}