// Question: Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// Leetcode: 1

#include <iostream>
#include <vector>
#include <utility>
# include <unordered_map>

using namespace std;

pair<int,int> twoSumArray(int arr[],int n, int k){
    unordered_map<int,int> mp;
    int fIndx = -1, sIndx = -1;
    for(int i = 0; i < n; i ++){
        int needed = k - arr[i];

        if (mp.find(needed) != mp.end()){
            fIndx = i;
            sIndx = mp[needed];
            return {fIndx, sIndx};
        }

        mp[arr[i]] = i;
    }
    return {fIndx, sIndx};
}

int main(){
    int arr[] = {2,6,5,8,11};
    int n = 5;
    int targetSum = 14;

    pair<int,int> ans = twoSumArray(arr, n, targetSum);

    if(ans.first != -1 && ans.second != -1){
        cout << "Indices of the two numbers are: "
             << ans.first << " and " << ans.second << endl;
    }
    else{
        cout << "No two numbers found with given target sum." << endl;
    }

    return 0;
}