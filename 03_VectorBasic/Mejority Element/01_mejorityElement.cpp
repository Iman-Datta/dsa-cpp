# include <iostream>
# include <vector>

using namespace std;

int mejorityElement(vector<int>nums){
    for (int val : nums){
        int frq = 0;
        for (int element : nums) {
            if (element == val) {
                frq ++;
            }
        }
        // cout << nums.size() << endl;
        if (frq > (nums.size() - 1)/2){
            return val;
        }
    }
    return 0;
}

int main () {
    vector <int> nums = {2,2,1,1,1};
    int element = mejorityElement(nums);

    cout << "Mejority element: " << element << endl;
    return 0;
}