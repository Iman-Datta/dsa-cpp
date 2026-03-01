// LeetCode: 169
// Question: Given an array nums of size n, return the majority element.

// Algo: moore's voting algorithm

// Time com -> O(n) and Space Com -> O(1)


# include <iostream>
# include <vector>

using namespace std;

int mejorityElement(vector<int> &nums){
    int count = 0;
    int el;
    for(int i = 0; i < nums.size(); i++){
        if(count <= 0) {
            count = 1;
            el = nums[i];
        }
        else if(nums[i] == el) count ++;
        else count --;
    }

    int countEl = 0;
    for(int i =0; i < nums.size(); i++){
        if(nums[i] == el) countEl ++;
        if (countEl > (nums.size() / 2)) return el;
    }
    return -1;
}

int main() {
    vector<int> nums = {7, 0, 0, 1, 7, 7, 2, 7, 7};

    int ans = mejorityElement(nums);
    cout << "The mejority element of your array is: " << ans << endl;
    return 0;
}