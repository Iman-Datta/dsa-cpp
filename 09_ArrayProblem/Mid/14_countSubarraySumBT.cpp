# include <iostream>
# include <vector>

using namespace std;

int countSubarraySum(vector<int> &nums, int k){
    int count = 0;
    
    int n = nums.size();

    for(int i = 0; i < n; i++){
        int subArrSum = 0;
        for(int j = i; j < n; j++){
            subArrSum += nums[j];
            if(subArrSum == k){
                count ++;
            }
        }
    }
    return count;
}

int main() {
    vector<int> nums = {3,2,4,6};
    int target = 6;

    cout << "The count of your sub array sum is: " << countSubarraySum(nums, target) << endl;
    return 0;
}