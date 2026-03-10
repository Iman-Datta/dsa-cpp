# include <iostream>
# include <vector>
#include <algorithm>

using namespace std;

void nextPermutation(vector<int>& nums){
    int n = nums.size();
    int pivot = -1;

    // Find pivot
    for(int i = n - 2; i >= 0; i--){
        if(nums[i] < nums[i + 1]){
            pivot = i;
            break;
        }
    }
    
    // Edge cases
    if(pivot == -1){
        reverse(nums.begin(), nums.end());
        return;
    }

    // Sawp pivot with right most element
    for(int i = n - 1; i >= 0; i--){
        if(nums[i] > nums[pivot]){
            swap(nums[i], nums[pivot]);
            break;
        }
    }

    // Reverse the array from p + 1 to n - 1
    reverse(nums.begin() + pivot + 1, nums.end());
    return;
}

int main() {
    vector<int> nums = {1, 3, 2};

    cout << "Original array: ";
    for(int val : nums) cout << val << "  ";

    cout << endl;

    cout << "Next Permutation: ";
    nextPermutation(nums);
    for(int val : nums) cout << val << "  ";

    cout << endl;

    return 0;
}