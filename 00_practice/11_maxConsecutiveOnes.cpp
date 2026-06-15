# include <iostream>
# include <vector>

using namespace std;

int maxConsecutive(vector<int> &vec){
    int n = vec.size();
    int count = 0;
    int max_count = INT_MIN;

    for(int i = 0; i < n; i++){
        if(vec[i] == 1) {
            count ++;
            max_count = max(count,max_count);
        }
        else{
            count = 0;
        }
    }
    return max_count;
}

int main() {
    vector<int> nums = {1,1,0,1,1,1};
    int ans = maxConsecutive(nums);
    cout << ans << endl;
    return 0;
}