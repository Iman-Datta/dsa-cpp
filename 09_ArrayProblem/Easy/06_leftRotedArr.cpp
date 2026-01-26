#include <iostream>
#include <vector>
using namespace std;

void rightRotate(vector<int>& vec, int k){
    int n = vec.size();
    k = k % n;

    while(k > 0){
        int temp = vec.back(); // store last element

        for(int i = n - 1; i > 0; i--){      
            vec[i] = vec[i - 1];// shift everything right
        }

        vec[0] = temp; // put last element at front
        k--;
    }
}

int main(){
    vector<int> nums = {1,2,3,4,5,6,7};
    int k;
    cout << "Enter the value of K: ";
    cin >> k;

    rightRotate(nums, k);

    for(int x : nums){
        cout << x << " ";
    }
    return 0;
}
