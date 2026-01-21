# include <iostream>
# include <vector>

using namespace std;

void single_num(vector<int> &num){
    int ans = 0;
    for (int val: num) {
        ans ^= val;
    }
    cout << "The Single Number of the array is : " << ans << "\n";
    return;
}

int main () {
    vector<int> num = {4,1,2,1,2};
    single_num(num);
    return 0;
}