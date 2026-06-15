# include <iostream>
# include <vector>
# include <unordered_map>

using namespace std;

int mejorityElement(vector<int> vec){
    unordered_map<int,int> mp;
    for(int i = 0; i < vec.size(); i++){
        mp[vec[i]] ++;
        
        for(auto it : mp){
            if(it.second > vec.size()/2){
                return it.first;
            }
        }
    }
    return -1;
}

int main() {
    vector<int> nums = {7, 0, 0, 1, 7, 7, 2, 7, 7};

    int ans = mejorityElement(nums);
    cout << "The mejority element of your array is: " << ans << endl;
    return 0;
}