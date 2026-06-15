#include <iostream>
# include <vector>
# include <climits>

using namespace std;

int sceLargest(vector<int> arr){
    int largest = 0;
    int slargest = INT_MIN;

    int n = arr.size();

    for(int i = 0; i < n; i++){
        if(arr[i] > largest){
            slargest = largest;
            largest = arr[i];
        }

        if(arr[i] > slargest && arr[i] < largest){
            slargest = arr[i];
        }
    }
    return slargest;
}

int main () {
    vector<int> arr = {42, 17, 89, 63, 25, 89, 54, 71, 38, 66};
    // vector<int> arr = {4,2,3,1};

    int ans = sceLargest(arr);
    cout << "2nd largest element in the array is: " << ans << endl;
    return 0;
}