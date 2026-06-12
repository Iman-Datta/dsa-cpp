#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};

    set<int> s (nums.begin(), nums.end());
     for(auto x : s){
        cout << x << " ";
    }

    return 0;
}