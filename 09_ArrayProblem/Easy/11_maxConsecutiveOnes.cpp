# include <iostream>
# include <vector>

using namespace std;

int maxConsecutive(vector<int> &vec){
    int count = 0, maxCount = 0;
    for (int i = 0; i < vec.size(); i++){
        if (vec[i] == 1) {
            count ++;
            maxCount = max(count, maxCount);
        }
        else{
            count = 0;
        }
    }
    return maxCount;
}

int main() {
    vector<int> nums = {1,1,0,1,1,1};
    int ans = maxConsecutive(nums);
    cout << ans << endl;
    return 0;
}