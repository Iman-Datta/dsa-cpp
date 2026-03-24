# include <iostream>
# include <vector>

using namespace std;

bool subSetSum(int index, int target, vector<int>& nums) {

    if (target == 0) return true;
    if (index >= nums.size()) return false;


    bool take = false;
    if (target >= nums[index]) {
        take = subSetSum(index + 1, target - nums[index], nums);
    }


    bool skip = subSetSum(index + 1, target, nums);

    return take || skip;
}


int main () {
    vector<int> arr = {3, 34, 4, 12, 5, 2};
    int target = 9;

    bool result = subSetSum(0, target, arr);

    if (result)
        cout << "Subset with given sum exists" << endl;
    else
        cout << "No subset found" << endl;

    return 0;
}