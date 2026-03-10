# include <iostream>
# include <vector>
#include <algorithm>

using namespace std;

int longestConsecutiveSeqBF(vector<int> &nums){
    int n = nums.size();
    int longestSeq = 0;

    for(int i = 0; i < n; i++){
        int countCrr = 1;                 // start with current element
        int lastSmaller = nums[i] - 1;

        while(find(nums.begin(), nums.end(), lastSmaller) != nums.end()){
            countCrr++;
            lastSmaller--;
        }

        int nextGreater = nums[i] + 1;

        while(find(nums.begin(), nums.end(), nextGreater) != nums.end()){
            countCrr++;
            nextGreater++;
        }

        longestSeq = max(longestSeq, countCrr);
    }

    return longestSeq;
}

int main () {
    vector <int> nums = {100, 4, 200, 1, 3, 2, 2, 5, 6, 7, 50, 51};

    int ans = longestConsecutiveSeqBF(nums);
    cout << "Longest consecutive seq is: " << ans << endl;
    return 0;
}