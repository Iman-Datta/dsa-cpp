# include <iostream>
# include <vector>
# include <algorithm>
# include <climits>

using namespace std;

int longestConsecutiveSeqBT(vector<int> &nums){
    int n = nums.size();

    int longestSeq = 0;
    int countCrr = 1;
    int lastSmaller = INT_MIN;

    sort(nums.begin(), nums.end());

    for(int i = 0; i < n; i++){
        if(nums[i] - 1 == lastSmaller){
            countCrr++;
            lastSmaller = nums[i];
        }
        else if (nums[i] != lastSmaller){
            countCrr = 1;
            lastSmaller = nums[i];
        }
        longestSeq = max(longestSeq, countCrr);
    }

    return longestSeq;
}

int main() {
    vector <int> nums = {100, 4, 200, 1, 3, 2, 2, 5, 6, 7, 50, 51};

    int ans = longestConsecutiveSeqBT(nums);
    cout << "Longest consecutive seq is: " << ans << endl;
    return 0;
}