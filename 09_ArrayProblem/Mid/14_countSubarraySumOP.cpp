# include <iostream>
# include <vector>
# include <unordered_map>

using namespace std;

int countSubarraySum(vector<int> &nums, int k){
    unordered_map<int,int> mp;
    int count = 0;
    int prefixSum = 0;

    for(int i = 0; i < nums.size(); i++){
        prefixSum += nums[i];

        if(prefixSum == k) count ++;

        if(mp.find(prefixSum - k) != mp.end()){
            count += mp[prefixSum - k];
        }

        mp[prefixSum]++;
    }
    return count;
}

int main() {
    vector<int> nums = {3,2,4,6};
    int target = 6;

    cout << "The count of your sub array sum is: " << countSubarraySum(nums, target) << endl;
    return 0;
}