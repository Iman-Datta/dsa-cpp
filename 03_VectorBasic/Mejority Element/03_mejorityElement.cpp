# include <iostream>
# include <vector>
#include <algorithm>

using namespace std;

int mejorityElement(vector<int>nums) {
    int frq = 0, ans = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (frq == 0) {
            ans = nums[i];
        }
        if (ans == nums[i]) {
            frq++;
        }
        else{
            frq--;
        }
    }
    return ans;
}

int main () {
    vector <int> nums = {3,2,3};
    int element = mejorityElement(nums);

    cout << "Mejority element: " << element << endl;
    return 0;
}