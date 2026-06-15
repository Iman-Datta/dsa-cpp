# include <iostream>
# include <vector>

using namespace std;

int maxSubArrSum(vector<int> vec){
    int n = vec.size();
    int current_sum = 0, max_sum = INT_MIN;
    for(int i = 0; i < n; i++){
        current_sum += vec[i];
        max_sum = max(max_sum,current_sum);

        if(current_sum <= 0){
            current_sum = 0;
        }
    }
    return max_sum;
}

int main(){
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int ans  = maxSubArrSum(nums);
    cout << "Maximum sub array sum of your array is: " << ans << endl;
    return 0;
}