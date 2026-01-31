#include <bits/stdc++.h>
using namespace std;

int singleNumXOR(vector<int>& vec, int n) { // IMPORTENT
    int xr = 0;
    for(int i = 0; i < n; i++) {
        xr = xr ^ vec[i];
    }
    return xr;
}

int singleNum(vector<int> &vec, int n){
    map<int,int> mpp;

    cout << "\nCounting frequency of each element...\n";
    for(int i = 0; i < n; i++){
        mpp[vec[i]]++;
    }

    cout << "Frequency table (element -> count):\n";
    for(auto it : mpp){
        cout << it.first << " -> " << it.second << endl;
    }

    cout << "\nSearching for element with frequency 1...\n";
    for(auto it : mpp){
        if (it.second == 1){
            return it.first;
        }
    }

    return -1;
}

int main() {
    int n, ans;

    cout << "Enter number of elements in the vector: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter " << n << " integers (space separated): ";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    ans = singleNum(nums, n);

    if(ans == -1)
        cout << "\nResult: No element has frequency exactly 1.\n";
    else
        cout << "\nResult: Element with frequency 1 is " << ans << endl;

    return 0;
}
