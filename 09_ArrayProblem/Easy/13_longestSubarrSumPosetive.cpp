# include <iostream>
# include <vector>

using namespace std;

int longestSubarrayWithSumK(vector<int> vec, int k){
    int right =0, left = 0;
    int sum = 0;
    int maxLen = 0;
    
    while (right < vec.size()){
        sum += vec[right];

        while(sum > k){
            sum -= vec[left];
            left ++;
        }

        if(sum == k){
            maxLen = max(maxLen, right - left + 1);
        }
        right ++;
    }
    return maxLen;
}

int main(){
    vector<int> nums = {10, 5, 2, 7, 1, 9};
    int k = 15;
    int ans = longestSubarrayWithSumK(nums, k);
    cout << ans << endl;
    return 0;
}