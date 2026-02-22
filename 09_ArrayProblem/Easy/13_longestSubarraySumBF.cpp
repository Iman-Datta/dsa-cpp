// Given an array containing both positive and negative integers, we have to find the length of the longest subarray with the sum of all elements equal to zero.

# include <iostream>
# include <vector>

using namespace std;

int longSubArrSum(vector<int> nums, int k){
    int n = nums.size();
    int len = 0;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum += nums[j];
            if (sum == k){
                len = max(len, j-i+1);
            }
        }
    }
    return len;
}

int main(){
    vector<int> nums = {1,2,3,1,1,1,1,4,2,3};
    int k = 3;
    int length = longSubArrSum(nums, k);
    cout << length << endl;
    return 0;
}