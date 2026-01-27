# include <iostream>
# include <vector>

using namespace std;

int missingNum(vector<int> vec){
    int n = vec.size(), actualSum = 0;
    int expectedSum = (n * (n+1))/2;
    for(int i = 0; i < n; i++){
        actualSum += vec[i];
    }
    return expectedSum - actualSum;
}

int main(){
    vector<int> nums = {9,6,4,2,3,5,7,0,1};
    int ans = missingNum(nums);
    cout <<"The missing value of the array is: "<< ans << endl; 
    return 0;
}