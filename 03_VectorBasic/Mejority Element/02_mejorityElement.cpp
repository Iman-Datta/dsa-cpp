# include <iostream>
# include <vector>
#include <algorithm>

using namespace std;

int mejorityElement(vector<int>nums) {
    sort(nums.begin(), nums.end()); // 2 3 3

    int frq = 1;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] == nums[i-1]) {
            frq ++;
        }
        else{
            frq = 1;
        }
        if (frq > (nums.size() / 2)) {
            return nums[i];
        }
    }
    return nums[0];
}

int main () {
    vector <int> nums = {3,2,3};
    int element = mejorityElement(nums);

    cout << "Mejority element: " << element << endl;
    return 0;
}