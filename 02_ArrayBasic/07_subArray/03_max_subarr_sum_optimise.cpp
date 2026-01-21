// Kadane's algo


# include <iostream>
# include <vector>
#include <climits>

using namespace std;

int maxSubArray(vector<int>& nums) {
    int max_sum = INT_MIN, current_sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        current_sum += nums[i];
        max_sum = max(current_sum, max_sum);
        if (current_sum < 0) {
            current_sum = 0;
        }
    }
    return max_sum;
}

int main () {
    int result;
    vector <int> nums = {3,-4,5,4,-1,7,-8};
    result = maxSubArray(nums);
    cout << "The maximum sub-array sum: " << result << endl;
    return 0;
}