#include <iostream>
#include <vector>

using namespace std;

bool isSort(vector<int> vec) {
    int sz = vec.size(), checkPoint = 0;
    for (int i = 0; i < sz; i ++) {
        if (vec[i] > vec[(i+1) % sz]){ // compare current element with next element (last element compares with first using modulo to check the circuler condition)
            checkPoint ++;
        }
    }
    if (checkPoint <= 1){
        return true;
    }
    else {
        return false;
    }
}

int main () {
    vector<int> numbers = {3,4,5,1,2};
    if (isSort(numbers)){
        cout << "The array is sorted." << endl;
    }
    else {
        cout << "The array is not sorted." << endl;
    }
    return 0;
}

class Solution {
public:
    bool check(vector<int>& vec) {
        int sz = vec.size(), isSort;
        for (int i = 0; i < sz; i ++){
            if(vec[i] > vec[(i+1) % sz]){ // Check circular drop: next index = (i+1)%sz (last connects to first)
                isSort ++;
            }
        }
        if (isSort <= 1) {
            return true;
        }
        else
            return false;
    }
};