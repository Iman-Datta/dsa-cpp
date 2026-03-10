# include <iostream>
# include <vector>
# include <climits>
# include <unordered_set>

using namespace std;

int longestConsecutiveSeqOP(vector<int> &nums){
    // Base case
    int n = nums.size();
    if(n == 0) return 0;

    int longestSeq = 1;
    unordered_set<int> st;

    // 
    for(int i = 0; i < n; i++){
        st.insert(nums[i]);
    }

    for(auto it : st){
        if(st.find(it - 1) == st.end()){ // Jodi khuje na pai
            int countCrr = 1;
            int startPoint = it;

            while(st.find(startPoint + 1) != st.end()){
                countCrr++;
                startPoint++;
            }
            longestSeq = max(longestSeq, countCrr);
        }
    }
    return longestSeq;
}


int main () {
    vector <int> nums = {100, 4, 200, 1, 3, 2, 2, 5, 6, 7, 50, 51};

    int ans = longestConsecutiveSeqOP(nums);
    cout << "Longest consecutive seq is: " << ans << endl;
    return 0;
}