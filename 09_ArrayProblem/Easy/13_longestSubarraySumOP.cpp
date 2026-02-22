# include <iostream>
# include <vector>
# include <unordered_map>

using namespace std;

int longestSubarraySumOP(vector<int> nums, int k){
    unordered_map<int,int> mp;
    int maxLen = 0, len = 0, prefixSum = 0;

    for(int i = 0; i < nums.size(); i++){
        prefixSum += nums[i];

        if(prefixSum == k){
            maxLen = i + 1;
        }

        if(mp.find(prefixSum - k) != mp.end()){
            int preIndx = mp[prefixSum - k];
            len = i - preIndx;
            maxLen = max(maxLen, len);
        }

        if(mp.find(prefixSum - k) == mp.end()){
            mp[prefixSum] = i;
        }
    }
    return maxLen;
}

int main (){
    vector<int> nums = {3, -1, -2, 5, -3, 1, 2, -2, 2};
    int k = 3;

    int longestLen = longestSubarraySumOP(nums, k);
    cout << "the length of the longest subarray with the sum of " << k << " is " << longestLen <<endl;
    return 0;
}