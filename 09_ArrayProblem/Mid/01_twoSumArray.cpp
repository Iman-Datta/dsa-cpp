# include <bits/stdc++.h>

using namespace std;

vector<int> twoSumArray(vector<int> &vec, int t){
    int sum = 0;
    for (int i = 0; i < vec.size(); i++){
        for (int j = i +1; j < vec.size(); j++){
            if(t == vec[i] + vec[j]){
                return {i,j};
            }
        }
    }
    return {};
}

int main() {
    vector<int> nums = {3,2,4};
    int target = 6;
    vector<int> ans = twoSumArray(nums, target);
    for(int val : ans){
        cout << "{" << val << "}";
    }
}