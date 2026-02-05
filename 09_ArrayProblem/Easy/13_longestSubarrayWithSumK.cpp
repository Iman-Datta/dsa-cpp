// Sliding window approach: Only applicable on positive number only

# include <iostream>
# include <vector>
# include <unordered_map>

using namespace std;

int longestSubarrayWithSumK(vector<int> &nums, int k) {
    int len = 0, maxLen = 0, start = 0, end = 0;
    int sum = nums[0];

    while(end < nums.size()){
        while(start < end && sum > k){
            sum -= nums[start];
            start ++;
        }
        len = end - start + 1;
        if(sum == k) {
            maxLen = max(maxLen, len);
        }
        end ++;
        if(end < nums.size()) sum += nums[end];
    }
    return maxLen;
}

int main () {
    vector<int> nums = {10, 5, 2, 7, 1, 9};
    int k = 15;
    int ans = longestSubarrayWithSumK(nums, k);
    cout << ans << endl;
    return 0;
}