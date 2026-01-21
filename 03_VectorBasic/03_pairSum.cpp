// Pair sum
// Sorted array

# include <iostream>
# include <vector>
#include <algorithm>

using namespace std;

vector<int> twoSum(vector<int>nums, int target) {
    int i = 0, j = nums.size() - 1, pairSum = 0;

    while (i<j) {
        pairSum = nums[i] + nums[j];

        if (pairSum < target) {
            i ++;
        }
        else if (pairSum > target) {
            j --;
        }
        else {
          return {i,j};
          }        
    }
    return {};
}

int main () {
    vector<int>result;
    vector<int> nums = {2,7,11,15};
    int target = 9;

    result = twoSum(nums, target);
    cout << result[0] <<"\t"<< result[1]<< endl;
}