// Question: You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.

# include <iostream>
# include <vector>

using namespace std;

void rearrangeArrElementsSign(vector<int> &nums){
    int pindx = 0, nindx = 0;
    vector<int> positive;
    vector<int> negative;

    for(int i = 0; i < nums.size(); i++){
        if(nums[i] > 0){
            positive.push_back(nums[i]);
        }
        else{
            negative.push_back(nums[i]);
        }
    }

    for(int i = 0; i < nums.size()/2; i++){
        nums[2 * i] = positive[pindx ++];
        nums[(2 * i) + 1] = negative[nindx ++];
    }
    return;
}

int main(){
    vector<int> nums = {3,1,-2,-5,2,-4};
    cout <<"Original array: ";
    for(int val : nums) cout << val << "\t";

    cout << endl;

    rearrangeArrElementsSign(nums);

    cout <<"After oparetion the array is: ";
    for(int val : nums) cout << val << "\t";
    return 0;
}