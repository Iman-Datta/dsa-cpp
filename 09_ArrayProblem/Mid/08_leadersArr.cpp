// Question: You are given an array arr[] of size N. An element is called a leader if it is greater than or equal to all the elements to its right side. The rightmost element is always a leader, since there are no elements to its right.

# include <iostream>
# include <vector>
# include <climits>
#include <algorithm>

using namespace std;

vector<int> leaderElement(vector<int> &vec){
    vector<int> leaders;
    int leaderEl = INT_MIN;
    for(int i = vec.size() - 1; i >= 0; i--){
        if(vec[i] >= leaderEl){
            leaderEl = vec[i];
            leaders.push_back(leaderEl);
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    vector<int>vec= {10, 22, 12, 3, 0, 6};
    cout << "Original array: ";
    for(int val : vec) cout << val << "\t";

    cout << endl;

    vector<int> leadElement = leaderElement(vec);
    cout << "Leader elements are: ";
    for(int val : leadElement) cout << val << " ";
    return 0;
}