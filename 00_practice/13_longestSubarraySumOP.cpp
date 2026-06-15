# include <iostream>
# include <vector>
# include <unordered_map>

using namespace std;

int longestSubarraySumOP(vector<int> vec, int k){
    unordered_map<int,int>mp;
    int maxLen = 0;
    int prefixSum = 0;
    for(int i = 0; i < vec.size(); i++){
        prefixSum += vec[i];

        if(prefixSum == k){
            maxLen = i + 1;
        }

        if(mp.find(prefixSum - k) != mp.end()){
            int preIndx = mp[prefixSum - k];
            int len = i - preIndx;
            maxLen = max(len, maxLen);
        }

        if(mp.find(prefixSum - k) == mp.end()){
            mp[prefixSum - k] = i;
        }
    }
    return maxLen;
}

int main(){
    vector<int> nums = {3, -1, -2, 5, -3, 1, 2, -2, 2};
    int k = 3;

    int longestLen = longestSubarraySumOP(nums, k);
    cout << "the length of the longest subarray with the sum of " << k << " is " << longestLen <<endl;
    return 0;
}