// Question: Given an integer array nums, rotate the array to the RIGHT by d steps, where d is non-negative.

// Time Complexity = O(n)
// Space Complexity = o(1)

# include <iostream>
# include <vector>
# include <algorithm>

using namespace std;

void leftRotate(vector<int> &nums, int d){
    int n = nums.size();

    d %= n;
    d = n - d;
    reverse(nums.begin(), nums.begin() + d);
    reverse(nums.begin() + d, nums.end());
    reverse(nums.begin(), nums.end());
}

int main (){
    vector<int> nums = {1,2,3,4,5,6,7};
    int d;
    cout << "Enter the value of K: ";
    cin >> d;

    leftRotate(nums, d);

    for(int x : nums){
        cout << x << "\t";
    }
    return 0;
}