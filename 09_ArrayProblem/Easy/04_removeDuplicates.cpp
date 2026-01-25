#include <iostream>
#include <vector>
using namespace std;

void removeDuplicates(vector<int>&vec) {
    int sz = vec.size(), k = 1;
    for (int i = 1; i < sz; i++) {
        if(vec[i] != vec[i-1]) {
            vec[k] = vec[i];
            k ++;
        }
    }
    for (int i = 0; i < vec.size(); i++) {
        if (i < k)
            cout << vec[i] << " ";
        else
            cout << "_ ";
    }
    cout << endl;
    return;
}

int main() {
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};

    removeDuplicates(nums);
    return 0;
}
