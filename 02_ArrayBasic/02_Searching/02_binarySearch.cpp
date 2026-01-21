# include <iostream>
# include <vector>

using namespace std;

int binarySearch(vector<int> &nums, int target) {
    int low = 0, high = nums.size() - 1;
    while (low <= high) {
        int mid = low + (high - low)/2;
        if (target == nums[mid]) {
            return mid;
        }
        else if (target < nums[mid]) {
            high = mid - 1;
        }
        else if (target > nums[mid]) {
            low = mid + 1;
        }

    }
    return -1;
}

int main () {
    vector<int>vec = {2,3,7,13,21,23};
    int target = 21, pos;
    pos = binarySearch(vec, target);
    cout << "Your target is found at " << pos << " index \n";
    return 0;
}