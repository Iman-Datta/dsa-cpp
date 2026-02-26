# include <iostream>
# include <vector>
# include <unordered_map>

using namespace std;

int mejorityElement(vector<int> &nums){
    unordered_map<int,int> mp;
    for(int i = 0; i < nums.size(); i++){
        mp[nums[i]] ++;

        for(auto it : mp){
            if(it.second > nums.size()/2){
                return it.first;
            }
        }
    }
}

int main () {
    vector<int> nums = {7, 0, 0, 1, 7, 7, 2, 7, 7};

    int ans = mejorityElement(nums);
    cout << "The mejority element of your array is: " << ans << endl;
    return 0;
}