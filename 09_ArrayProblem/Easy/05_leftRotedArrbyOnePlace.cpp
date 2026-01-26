# include <iostream>
# include <vector>

using namespace std;

void leftRoted(vector<int>&vec){
    int temp = vec[0];
    for(int i = 0; i < vec.size() - 1; i++) {
        vec[i] = vec[i+1];
    }
    vec.back() = temp;
    for(int val : vec){
        cout << val << " ";
    }
    return;
}

int main () {
    vector<int> nums = {1, 2, 3, 4, 5};
    leftRoted(nums);
    return 0;
}