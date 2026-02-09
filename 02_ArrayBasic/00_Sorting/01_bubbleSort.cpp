# include <iostream>
# include <vector>

using namespace std;

vector<int> bubbleSort(vector<int> &nums){
    int n = nums.size();
    for(int i = 0; i < n -1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(nums[j] > nums[j+1]){
                swap(nums[j] , nums[j+1]);
            }
        }
    }
    return nums;
}

int main (){
    vector<int> nums;
    vector<int> ans;
    int n, element;

    cout << "Enter the size of the array: ";
    cin >> n;

    for(int i =0; i < n; i++){
        cout << i+1 << " Element: ";
        cin >> element;
        nums.push_back(element);
    }

    cout << "Original array: ";
    for(int val : nums){
        cout << val << "\t";
    }

    cout << "After bubble sort: ";
    ans = bubbleSort(nums);

    for(int val : ans){
        cout << val << "\t";
    }

}